#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define   WIDTH    100
#define   HEIGHT   60
#define   PI       acos( -1.0 )

int main(void){
    int x;
    int y = 60;  //initialize this value first to run an outter loop
    int deltaX;
    int deltaY;
    double temperature;
    
    printf("Enter grid spacing in x-direction: ");
    scanf("%d", &deltaX );
    printf("\nEnter grid spacing in y-direction: ");
    scanf("%d", &deltaY);
    printf("\n");

    //outter loop contrl row; but since we use \n, this one represent a value of column(y)
    while(y >= 0){

        //initialize a value of x here to control a column, also we can print anything for first column here
        printf("y = %d:\t", y);
        x = 0;
        //inner loop control column; but this represent a value of row(x)
        while(x <= 100){
            //calculate 
            temperature = 10*sin((2*PI*x)/WIDTH)*cos((2*PI*y)/HEIGHT);
            printf("%5.2lf ", temperature);
            x += deltaX;
        }

    //new line; to change from row to column
    printf("\n");
    y -= deltaY;
    }
    return 0;
}