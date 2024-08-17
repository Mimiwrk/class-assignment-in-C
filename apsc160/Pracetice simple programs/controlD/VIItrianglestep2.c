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
    int size;    //column: vertical
    int row = 1; //row: horizontal
    int star;    

    printf( "Enter size of triangle: " );
    scanf( "%d", &size );

    //outter loop, increase #row
    while( row <= size ) {
        star = 1;

        //increase a star as row increase, inner loop print #star; same as #row
        while( star <= row ) {
            printf( "*" );
            star++;
        }

        //add new line
        printf( "\n" );

        //increase the row to the right
        row++;
    }

    system( "PAUSE" );
    return 0;
}