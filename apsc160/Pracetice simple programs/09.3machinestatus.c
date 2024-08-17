/* 
We are trying to write a program that:

-prompts the user for the air temperature (in degrees Celsius) and pressure (in pounds per square inch (PSI)) inside a mechanical device.
-prints the message "Error: input not valid", if the user enters a pressure that is negative, and then terminates.
-otherwise prints one of the following messages about the machine's operation according to the following rules:
    If the temperature is above 300°C or below 5°C, or if the pressure is above 150 PSI, then it prints the message "Machine is not operating under normal conditions!".
    If the temperature is above 250°C and the pressure is above 100 PSI, then it prints the message "Machine is not operating under normal conditions!".
    Otherwise, it prints the message "Machine is operating under normal conditions!"
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_TEMP     300.0
#define MIN_TEMP     5.0
#define MAX_PRESSURE 150.0
#define MIN_PRESSURE 100.0

int main(void) {
    int Temp;
    int Pressure;

    //prompts the user for the air temperature (in degrees Celsius) and pressure (in pounds per square inch (PSI)
    printf("Enter air temperature in celcius : ");
    scanf("%d", &Temp);
    printf("\nEnter air pressure in PSI : ");
    scanf("%d", &Pressure);

    //if the user enters a pressure that is negative, prints the message "Error: input not valid"
    if(Pressure < 0 )
        printf("\nError: input not valid");

    else{
        //otherwise prints "Machine is not operating under normal conditions!," if temp is above 300°C or below 5°C, or if the pressure is above 150 PSI
        if(Temp > MAX_TEMP || Temp < MIN_TEMP || Pressure > MAX_PRESSURE)
            printf("\nMachine is not operating under normal conditions!");
        //otherwise"Machine is not operating under normal conditions!," If the temperature is above 250°C and the pressure is above 100 PSI
        else if(Temp > 250 && Pressure > MIN_PRESSURE)
            printf("\nMachine is not operating under normal conditions!");
        else
            printf("\nMachine is operating under normal conditions!");
    }

    return 0;
}