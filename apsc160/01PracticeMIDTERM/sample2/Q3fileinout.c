/* Author : Mimi Ngamchaianan
*  Date : Oct14, 22
*  Purpose : convert any number that is more than 1.0 to be 1.0
*            conveer any number that is less than 0.0 to be 0.0
 */
#include <stdio.h>

#define INFILE "input.dat"
#define OUTFILE "output.dat"

int main(void){
    //file pointer
    FILE *inputfile;
    FILE *outputfile;
    double num;

    //open file for reading and wrinting
    inputfile = fopen(INFILE, "r");
    outputfile = fopen(OUTFILE, "w");

    //verify if reading file can be opened
    if(inputfile == NULL){
        printf("Error : couldn't open reading file\n");
    }else{
        //reading an inputfile
       while(fscanf(inputfile, "%lf", &num) == 1){

            //verify if writing file can be opened
            if(inputfile == NULL){
                printf("Error : couldn't open the file for writing\n");
            }else{
                if(num > 1.0)
                    num = 1.0;
                else if(num < 0.0)
                    num = 0.0;
                else
                    num = num;

                fprintf(outputfile, "%.2lf\n", num);
            }

        }

    //close both reading and writing file, inside else but outside while loop
    fclose(inputfile);
    fclose(outputfile);
    }



return 0;
}