/*
 Author: Alan T
 Date: Feb 6, 2018
 Purpose: Read numerical data from input.dat and copy it to
 output.dat after processing as follows:
       * any number greater than 1.00 will be converted to 1.00
       * any number below 0.00 will be converted to 0.00
*/
#include <stdio.h>

#define INPUTFILE "inputsol.dat"
#define OUTPUTFILE "outputsol.dat"
int main(void){
    FILE* inFile;
    FILE* outFile;
    double nextVal;

    /* open input file and check */
    inFile = fopen(INPUTFILE, "r");

    if (inFile == NULL)
        printf("Error opening input file; program terminating.\n");
    else {

        /* open output file and check */
        outFile = fopen(OUTPUTFILE, "w");

        if (outFile == NULL) {
            printf("Error opening output file; program terminating.\n");
            fclose(inFile); /* close the file we've already opened */ 
        }
        else {
            /* copy values from input file to output file */ 
            while (fscanf(inFile, "%lf", &nextVal) == 1) {
                if (nextVal < 0)
                    fprintf(outFile, "%.2f\n", 0.0);
                else if (nextVal > 1)
                    fprintf(outFile, "%.2f\n", 1.0);
                else
                    fprintf(outFile, "%.2f\n", nextVal);
            } 
        }
        /* close files and finish */
        fclose(inFile);
        fclose(outFile);
    }

return 0; 
}