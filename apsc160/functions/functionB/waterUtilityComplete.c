/*
 * Author: Joe Gear
 * Date: December 5, 2008
 * Purpose:  prompts user for number of units of water 
 * used (in cubic metres) and prints total amount owing
 * for water consumption and sewer disposal.
 */

#include <stdio.h>
#include <stdlib.h>

#define WATER_PER_UNIT 0.75
#define SEWER_PER_UNIT 0.60
#define MIN_CHARGE 20.00

double maximum( double num1, double num2 );

int main( void ) {
    int unitsUsed;
    double waterCost;
    double sewerCost;
    double totalOwing;

    printf( "Enter number of units of water used (in cu.m.): " );
    scanf( "%d", &unitsUsed );

    waterCost = maximum( unitsUsed * WATER_PER_UNIT, MIN_CHARGE );
    sewerCost = unitsUsed * SEWER_PER_UNIT;
    totalOwing = waterCost + sewerCost;

    printf( "Total owing: $%.2f\n", totalOwing );

    system( "PAUSE" );
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