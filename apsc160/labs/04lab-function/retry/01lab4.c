#include <stdio.h>

void printChars(int nChars, char printChar);
void printTri(int size, char symbol);
void printPic(int size);

int main(void){
    int size = 3;

    //printChars(3, '*');
    //printTri(size, '*');
    printPic(5);


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

/* 
function that print triangle
param : size - size of triangle
param: symbol = a character to be prnted
*/
void printTri(int size, char symbol){

    int row = 1;
    while(row <= size){       
        printChars(row, symbol);    

        printf("\n");
        row++;
    }

}

void printPic(int size){
    int row = 1;
    char symbol = '#';
    char symbol2 = '1';

    while(row <= size){
        //print '*' in the odd row number(row1,3,5,...)
        if(row%2 != 0)
            printTri(row, symbol);
        else
            printTri(row, symbol2);

        row++;
    }
}