/* Author:   Mimi Ngamchaianan
 * Date:     Oct 5, 22
 * Purpose:  Prompt a user for a positive integer N. Then,
 *           write to the file "sineTable.dat" a table of
 *           sine values for the input values:
 *           PI/N, 2*PI/N, ..., N*PI/N.
 *
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI acos(-1.0)

int main(void) {
    //file pointer, declare variables
    FILE *writefile;
    int count = 1;
    int N;      //number of column
    double x;
    double sinx;

    //open file for writing
    writefile = fopen("sineTable.dat", "w");

    if(writefile != NULL){
        printf("Enter positive integer : ");
        scanf("%d", &N);

        fprintf(writefile,"%s", "\tx sin(x)\n");
        while(N >= count){
            x = count*PI / N;   //calculate x
            sinx = sin(x);      //claculate sin of x
            ++count;
            
            fprintf(writefile, "%.3lf %.4lf\n", x, sinx);
        }
        
    fclose(writefile);
    }
    else{
        printf("Error : couldn'd open the file\n");
    }
    
    return 0;
}