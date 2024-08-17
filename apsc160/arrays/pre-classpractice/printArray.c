/*
 * Author: Joe Gear
 * Date: January 15, 2009
 * Purpose:  prints the elements of an array onto the screen.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6  //tell how many integers that array store

int main( void )
{
    int data[] = { 3, 8, 2, 5, -1, 9 };
    int index = 0;  //idex0 is 3, index1 is 8, and so on

    while( index < SIZE )   //index0<size6
    {   
        /////////////////////////////IMPORTANT CODE//////////////////////////////////////
        //print data from index0 to index5(less than size = 6)
        printf( "%d ", data[ index ] );
        index++;
    }

    printf( "\n" );
    //system( "PAUSE" );
    return 0;
}