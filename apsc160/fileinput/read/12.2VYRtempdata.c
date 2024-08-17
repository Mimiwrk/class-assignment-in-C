/*
write a program that reads the file 
and reports the average temperature at midnight 
over the year to one decimal place.

For each line:
- The first entry is an integer from 1 to 366 (2008 was a leap year) representing the day of the year.
- The next four entries are doubles representing the temperature at midnight, 6 A.M., noon and 6 P.M., in that order.
*/ 

#include <stdio.h>
#include <stdlib.h>

#define inputfile "yvrTemperature08.dat"

int main(void){
    FILE *inFile;
    double averageTEMP;
    double midnightTEMP;
    double sumTEMP;
    int count = 0;

    //open file for reading
    inFile = fopen(inputfile, "r");

    //verify that file can be opened
    if(inFile == NULL){
        printf("Error : cannot open the file\n");
    }else{
        /*read a file and print the average temp at midnight
          read 1 integer only which is the 2nd field, and skip other fields
        */
        while(fscanf(inFile, "%*i %lf %*lf %*lf %*lf", &midnightTEMP) == 1){
            sumTEMP += midnightTEMP;
            count++;

            
        }

    //calculate average and print it
    averageTEMP = sumTEMP/count;
    printf("Average temperature at midnight : %.1lf\n", averageTEMP);

    //close the file
    fclose(inFile);
    }

    return 0;
}
