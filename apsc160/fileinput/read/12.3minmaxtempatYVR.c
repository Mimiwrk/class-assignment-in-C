/*
We’ll write a program that reads the file 
and reports the minimum and maximum temperatures recorded 
at noon over the year to one decimal place.
*/
#include <stdio.h>
#include <stdlib.h>

#define INPUTFILE "yvrTemperature08.dat"

int main(void){
    //point to inFile
    FILE *inFile;
    double noonTEMP;
    double minTEMP;
    double maxTEMP;
    int count = 0;

    //open the file for reading
    inFile = fopen(INPUTFILE, "r");
    
    //verify if file can be opened
    if(inFile == NULL){
        printf("Error : couldn't open the file!\n");
    }else{
        //read the file for only 
        while(fscanf(inFile,"%*d %*lf %*lf %lf %*lf", &noonTEMP) == 1){
            count++;
            //find min value
            if(noonTEMP < minTEMP){
                minTEMP = maxTEMP;
            }
            //find max value
            else if(maxTEMP < noonTEMP){
                maxTEMP = noonTEMP;
            }
        }
    //print min and max temp
    printf("%d lines, with noon temperatures in range [%.1lf,%.1lf\n", count, minTEMP, maxTEMP);
    //close the file
    fclose(inFile);
    }

    return 0;
}