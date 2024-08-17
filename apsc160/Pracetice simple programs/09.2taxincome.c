/*
Complete the program below so that it computes the income tax based on the user's income, 
as indicated below.

Income	                        Tax Payable
Income ≤ 12,500	                0%
12,500 < income < 65,000	    24% of income in excess of 12,500
Income ≥ 65,000	                12,600 plus 32% of income in excess of 65,000

Be sure to make use of the symbolic constants!
*/

#include <stdio.h>
#include <stdlib.h>

#define BASE_CUTOFF     12500.00    
#define MID_CUTOFF      65000.00
#define MID_RATE        0.24
#define HIGH_RATE       0.32
#define HIGH_BASE_TAX   12600.00

int main(void) {
    double income;
    double taxOwing;

    printf( "Please enter your income: " );
    scanf( "%lf", &income );

    if(income <= BASE_CUTOFF)
    {
        taxOwing = 0.00;
    }

    else if(BASE_CUTOFF < income < MID_CUTOFF)
    {
        taxOwing = ( income - BASE_CUTOFF ) * MID_RATE;
    }

    if(income >= MID_CUTOFF)
    {
        taxOwing = HIGH_BASE_TAX + ( income - MID_CUTOFF ) * HIGH_RATE;
    }

    printf( "Tax owing: $%.2f\n", taxOwing );
    
    return 0;
}