/*
 * Author: Joe Gear
 * Date: December 5, 2008
 * Purpose:  prompts user for number of units of water 
 * used (in cubic metres) and prints total amount owing
 * for water consumption and sewer disposal.
 */

#include <stdio.h>
#include <stdlib.h>

double maximum( double num1, double num2 );

int main( void ) {



    return 0;
}

/*
 * Function computes the maximum of num1 and num2.
 * Parameters: num1, num2
 * Return: maximum of num1 and num2
 */
double maximum( double num1, double num2 ) {
    double maxVal;

    if( num1 > num2 )
        maxVal = num1;
    else
        maxVal = num2;

    return maxVal;
}
