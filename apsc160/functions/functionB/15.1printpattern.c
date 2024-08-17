/*
 * Author: Mimi Ngamchaianan
 * Date: Oct 11, 22
 * Purpose: Prompts the user for the size of a square then
 *          draws a pattern consisting of a square of
 *          asterisks followed by a square of periods.
 *      : create a single function, printChars, that replaces printStars and printDots 
 *      by including an additional parameter: 
 *      the symbol (character) to be printed repeatedly.
        (refactor the code)


 Code refactoring is defined as the process of restructuring computer code without changing or adding to its external behavior and functionality.
 */
#include <stdio.h>
#include <stdlib.h>

// //old function paratmeters
// void printStars( int length );
// void printDots( int length );


//both function prototypes
void printChars(int length, char symbol);

int main(void){
    int size;       //coltrol column of a stars, also row = colume*2(half stars, half dots)
    int row = 0;    //control row only, need to be less than size because it starts from zero, if row = 1:  row <= size
    char star = '*';                //42 = * in ascii code,46 = '.'
    char dot = '.';
    
    printf( "Enter size of square: " );
    scanf( "%d", &size );
    
    //this while loop will control how many time the function can be executed, as well as how many rows
    while( row < size ) {
        //function that print both star and dot by given size of star and row
        printChars( size, star );
        printChars( size, dot );
        printf( "\n" );
        row++;
    }
    
    system( "PAUSE" );
    return 0;
}

//function(formal parameters), this function generalize the old function, meaning that it is more global and can beused in may situation and not hard coded
void printChars(int length, char symbol){
int count;  //control the loop
    for(count = 0; count < length; count++){
        printf("%c", symbol);
    }
}

// //first old formal function
// void printStars( int length ) {
//     int star = 0;
//     while( star < length ) {
//         printf( "*" );
//         star++;
//     }
// }


// //second old formal function
// void printDots( int length ) {
//     int dot = 0;
//     while( dot < length ) {
//         printf( "." );
//         dot++;
//     }
// }


