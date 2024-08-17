/*
write a program that prompts the user for the area of a plot of land in acres,
and prints the area of the same plot of land in square metres. 
Assume that 1 acre is equivalent to 4046.85642 square metres.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double area1;
    double area2;
    
    printf( "Enter area in acres: " );
    scanf( "%lf", &area1 );
    area2 = area1 * 4046.85642;
    
    printf( "Area in square metres: %f\n", area2 );
    
    system( "PAUSE" );
    return 0;
}