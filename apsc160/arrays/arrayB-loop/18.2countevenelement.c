/*
 *  Author:    APSC 160 Instructor
 *  Function:  numOfEvenEntries
 *  Purpose:   Determine how many even elements are found in an array.
 *  Param:     array  - the array
 *             size   - size of the array
 *  Return:    the number of entries which are even
 */

//function prototypes

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int numOfEvenEntries(int array[], int size);

int main(void){
    int array[3] = {-836, 323, -55};
    int num_even;

    num_even = numOfEvenEntries(array, SIZE);

    printf("even number : %i\n", num_even);


return 0;
}

int numOfEvenEntries(int array[], int size) {
    int count = 0;

    for(int index = 0; index < size; index++){
        if(array[index] % 2 == 0){
            count++;
        }
    }

   return count;
}


/* Write a function named numOfEvenEntries that takes an array of values of type int 
and the size of that array as its only parameters and 
that returns the number (count) of values in the array that are even (i.e., that are exactly divisible by 2). */

//return how many number are even number