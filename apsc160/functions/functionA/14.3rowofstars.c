/*
Author : Mimi Ngamchaianan
Student# : 85572261
Date : Oct6,22
Purpose : Write a function drawRow that takes 
        the length of a row length as its only parameter 
        and that prints a row of stars (*) of the specified length 
        on the screen. 
*/


#include <stdio.h>
#include <stdlib.h>

/* Function prototype.  Implementation to be written by you! */
void drawRow(int row);

int main(void) {
    int length;
	
	/* Read in length of row to draw */
    printf("Enter number of star : ");
    scanf("%d", &length);
	
	/* Print row of stars, contained within square brackets */
    printf("[");
    drawRow(length);
    printf("]\n");
    
	return 0;
}

/*
take lenght of row and prints a row of stars
use void because I don't want return value but printing stars as I initialize in the main function
*/
void drawRow(int row){
    //control number of star in a row
    int count = 0;
    //star will print until count is 1 less than length, 0 1 2 3 4 = 5times
    while(count < row){
        count++;
        printf("*");
    }
} 