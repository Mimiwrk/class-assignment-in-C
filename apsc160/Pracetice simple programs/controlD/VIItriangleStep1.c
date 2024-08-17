/*
 * Author: Joe Gear
 * Date: November 25, 2008
 * Purpose:  Prompts the user for the size of an equilateral triangle
 *           and draws it on the screen using asterisks.  If the
 *           user enters a value less than 1, nothing is printed.
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int size;
    int row;

    printf( "Enter size of triangle: " );
    scanf( "%d", &size );

    row = 1;

    while( row <= size ) {
        printf( "print %d stars\n", row );
        row++;
    }

    system( "PAUSE" );
    return 0;
}