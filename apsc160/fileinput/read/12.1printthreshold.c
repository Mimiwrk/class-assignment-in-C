/*
Write a program that prompts the user for a threshold value, 
and then print the number of entries in INPUTFILE
that are greater than the given threshold value. 
****Do not print the content of INPUTFILE.
*/
#include <stdio.h>
#include <stdlib.h>

#define INPUTFILE "weights.dat"

int main(void){
    FILE*   inFile;     //point to inFile(file pointer)
    double  nextVal;
    double  thresholdVal;
    int     countAbove = 0;
    
    //open the file for reading
    inFile = fopen(INPUTFILE, "r");

    //verify the file that it can be opened
    if (inFile == NULL)
        printf("Error opening input file - program terminating...\n");
        
    else {
        //prompts the user for a threshold value
        printf("Enter a threshold value : \n");
        scanf("%lf", &thresholdVal);

        //read the file if nextVal is greater than thresholdVal while reading values in inFile one at a time
        while( fscanf(inFile, "%lf", &nextVal) == 1){
            if(nextVal > thresholdVal){
                countAbove++;
            }
        }

        //print the number of entries in INPUTFILE
        printf("Number of enties that are greater than threshold : %d\n", countAbove);

        //close the file
        fclose(inFile);
    }
    return 0;
}