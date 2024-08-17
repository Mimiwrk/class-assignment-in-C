#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI acos(-1.0)

int main(void){
    int countRows, countCols;
    int nRows, nCols;
    double MaxX, MaxSIN = 0.0;
    double x, sineval;

    //prompts user for number of row and column
    printf("Enter number of column : ");
    scanf("%i", &nRows);
    printf("\nEnter number of row : ");
    scanf("%i", &nCols);

    //prints a table of sin(cx)
    countRows = 1;
    while(countRows <= nRows){
        x = countRows * PI / nRows;
        printf("%.3lf", x);

        countCols = 1;  //cant be zero because this value has to do with the calculation of x
        while(countCols <= nCols){
            sineval = sin(countCols * x);
            printf("%8.3lf", sineval);

            //find a maximum value of sineval as well as x that produce that val
            if(MaxSIN < sineval){
                MaxSIN = sineval;
                MaxX = x;
            }
        countCols++;
        }
    
    printf("\n");
    countRows++;
    }
    printf("Maximum output value of %.3lf\noccurs at x = %.3lf\n", MaxSIN, MaxX);
return 0;
}



/* 
format for nested while loop

                int size, row, column;

                column = 1;
                while(column <= size){

                    row = 1;
                    while(row <= size){

                    row+;
                    }
                column++;

                }

 */





























