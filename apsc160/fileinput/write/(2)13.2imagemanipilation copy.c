
//second method using modulus and count valiablw, to control a row

/* Author: Mimi Ngamchaianan
 * Date:  Oct7, 22
 * Purpose:  Reads an image file in grayscale format
 *           and generates a new image file with increased brightness
 * 
 * read a file and write into another file
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INPUTFILE "input.pgm"
#define OUTPUTFILE "output.pgm"

int main(void) {
    FILE *inFile;
    FILE *outFile;
    int width, height, white, inPixel, outPixel; //(double)variable , squrt(smth)
    int count = 0;     //control a row

    //open the file for reading 
    inFile = fopen(INPUTFILE, "r");
    //open the file for writing inside reading while loop
    outFile = fopen(OUTPUTFILE, "w");

    //verify if reading file can be opened
    if(inFile == NULL){
        printf("Error : File cannot be opened!!\n");
    }   
    else{
        //read the first line only(inFile)
        fscanf(inFile, "%i %i %i", &width, &height, &white);
        //print the first line only(outFile)
        fprintf(outFile, "%i %i %i\n", width, height, white); 

        //while reading one line at a time after first line
        while(fscanf(inFile, "%i", &inPixel)==1){
            //verify if writing file can be opened
            if(outFile == NULL){
                printf("Error : out put file cannot be opened!!\n");
            }
            else{
                //translate number into a pixcel
                outPixel = (double)white * (sqrt((double)inPixel/(double)white));  //prime pixcel equation
                //write translated pixel into another file
                fprintf(outFile, "%i ", outPixel);
                //increase count each time until it reaches to if statement #width times
                count++;

                //compare count to width, whenever count != width it will get out of the loop and go back to the top again(still in while loop) after it reaches the end of while loop.
                if(count == width){
                    /*reset count value to zero again for the loop to print a new line whenever the value equal to width(or row)
                      try to set count = 3; or 2 or 1 and see the difference of the output in each line*/
                    count = 0;
                    //print the new line
                    fprintf(outFile, "\n");
                }
            }
        }
    //close reading file
    fclose(inFile);
    //close writing file
    fclose(outFile);
    }

return 0;
}