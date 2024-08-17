/*
 * Function:  copyNonNeg
 * Purpose:   Create a copy of an array with each negative value replaced by 0.
 * Param:     data   - the original array
 * Param:     size   - the size of the array
 * Param:     nonNeg - the array that will store the copy
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 7  //only setup for testing

//function prototype
void copyNonNeg( int data[], int size, int nonNeg[] );

int main(void){
    int size;
    //original array
    int data[] = { 4, -3, 2, 7, 0, -1, 9 };
    //emptay array(we want to use function to fill this array with new value from the original array)
    int nonNeg[SIZE];

    copyNonNeg(data, SIZE, nonNeg);

    return 0;
}

void copyNonNeg( int data[], int size, int nonNeg[] ){
    for(int index=0; index < size; index++){
        //change negative value to zero
        if(data[index] < 0){
            data[index] = 0;
        }
        //passes values froms data[] into nonNeg[]
        nonNeg[index] = data[index];
        printf("%d, ", nonNeg[index]);
    }
}

//Returned copy: { 4, 0, 2, 7, 0, 0, 9 }

/* 
//correct answer***********************************************
void copyNonNeg( int data[], int size, int nonNeg[] )
{
    int index;
    
    for (index = 0; index < size; index++)
    {
        if (data[index] < 0)
            nonNeg[index] = 0;
        else
            nonNeg[index] = data[index];
    }
} 
*/
