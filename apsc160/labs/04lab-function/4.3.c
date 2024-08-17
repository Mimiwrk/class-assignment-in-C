/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date : Oct 20, 2022
*/
#include <stdio.h>
#include <stdlib.h>

#define CHARACTER 'o'

//function prototype
void printChars(int nChars, char printChar);

int main(void){
    int size;
    char symbol = CHARACTER;
    char symbol2 = '+';

    //printf("Enter size : ");
    scanf("%d", &size);


/*     //control column
    int row = 1;
    while( row <= size ) {
        //function that print row
        if(size != 0){
            printChars(row, symbol);
        }
        else{
            printChars(row, symbol2);
        }
    row++;
    } */

    for(int row=1; row < size; row++){
        while( row <= size ){
            printChars(row, symbol);
        }
        while( row <= size ){
            printChars(row, symbol2);
            //size--;
        }
    printf( "\n" );
    }

    return 0;
}

/*
 * Prints the given character the given number of times
 * on the screen.
 * Parameter: nChars - the number of characters to print
 * Parameter: printChar - the character to print
 */
void printChars(int nChars, char printChar)
{
    int countChars = 0;
    while (countChars < nChars)
    {
        printf("%c", printChar);
        countChars++;
    }
}