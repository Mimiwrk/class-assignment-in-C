/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date : Dec8, 2022
purose :
*/

/* 
part1 : printTriangle function
Write a function called printTri that takes the size of a triangle (assumed to be a positive integer value) and a character as its only parameters. 
printTri doesn't return a value but prints a triangle of the specified size on the screen 
using the specified character as illustrated below. 
You'll also want to add a main() function so that you can test your printTri function.
Note that the pictures below are just examples. 
Your function must work for any reasonable size! 
You will get no marks if your printTri function doesn't make appropriate use of the given printChars function!
*/
/*
Part2 : print more shape
This part builds from what you have created in your previous program. 
Add a function called printPic to your program that takes the size of a picture as its only parameter 
and that prints a picture as illustrated below. 
Since printPic prints to the screen it doesn't need to return any values. 
Your picture should use the same characters, 1 and #, in the same order. Colors are used below just as emphasis, your code does not need to print code in different colors.

Note that the function you wrote in Part 1 solves part of the problem – you must make appropriate use of that function. 
You'll need to add a main() function so that you can test your printPic function. Again, the pictures below are just examples. 
Your function must work for higher values of size as well, within reason.
*/

#include <stdio.h>

#define SYMBOL '#'
#define SYMBOL2 '1'

void printChars(int nChars, char printChar);
void printTri(int triSize, char symbol);
void printPic(int picSize);

int main(){
    int size = 5;

    //printTri(size, SYMBOL);
    printPic(size);

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
 * purpose : print the triangle from the given size and character
 * param : size - size of the triangle
 * param : symbol - a character
*/
void printTri(int triSize, char symbol){
    int height = 1;

    while(height <= triSize){
        printChars(height, symbol);
        printf("\n");
        height++;
    }
}

/*
 * purpose : print the picture of the triangle
 * param : size - size of the picture
*/
void printPic(int picSize){
    
    int picheight = 1;
    while(picheight <= picSize){
        if(picheight%2 != 0){
            printTri(picheight, SYMBOL);
        }else{
            printTri(picheight, SYMBOL2);
        }
        picheight++;
    }
}