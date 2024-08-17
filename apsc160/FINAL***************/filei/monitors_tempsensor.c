#include <stdio.h>
#include <stdlib.h>
//#include <Windowa.h>
//#include <DAQlib.h>

#define TRUE 1
#define FALSE 0

#define DELAY_TIME 5000
#define TEMP_A 0
#define TEMP_B 1
#define SWITCH 0


double readTemperatureSensor(int chanel);
void writeTemperatureFile(double temp1, double temp2, FILE *outfile);
void mornitorTemperature(void);

int main(void){

    if(setupDAQ(0) == TRUE)
        mornitorTemperature();
    else
        printf("ERROR: Cannot initialize DAQ\n");

    return 0;
}


double readTemperatureSensor(int chanel){
    double analogVol, temp;

    //read the voltage from the analog chanel
    analogVol = analogRead(chanel);

    //convert analogvoltage(volts) into temperature(degree celsius)
    temp = 10.0*(double)analogVol - 8.0;

    return temp;
}

void writeTemperatureFile(double temp1, double temp2, FILE *outfile){
    int differ_temp;

    //absoluto value of the difference of 2temperatures
    //differ_temp = fabs(temp1-temp2);                      //can't use external math library
    differ_temp = temp1-temp2;

    //if differ_temp is negative, change it to positive
    if(differ_temp < 0)
        differ_temp *= -1;

    //write temperature data into a file
    fprintf(outfile, "%.2lf\t%.2lf\t%.2lf", temp1, temp2, differ_temp);

}

void mornitorTemperature(void){
    double temp1, temp2;
    FILE *outfile;

    //set up the file name with type of writing file
    outfile = fopen("temperature_data.txt", "w");

    //verify the file
    if(output == NULL){
        printf("Error : can't open the output file\n");
        return 0;   //exit(1);
    }


    while(continueSuperloop() == TRUE){
        if(digitalRead(SWITCH)){
            temp1 = readTemperatureSensor(TEMP_A);
            temp2 = readTemperatureSensor(TEMP_B);
            writeTemperatureFile(temp1, temp2, outfile);

            sleep(DELAY_TIME);
        }
    }
    fclose(outfile);
}