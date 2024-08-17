/*
    Name : Mimi Ngamchaianan
    Student# : 85572261
    Lab section : L1B
    UBC email : wngamcha@student.ubc.ca
    Date : Oct18, 2022
    Purpose : Print the largest value found in the array
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void){
    int data[] = { -5, -7, 3, 1, 0, 23, -14, 35, 12, 16 };
    int index = 0;
    //assume that the first value is the max value and compare with other values later
    int maxVal = data[0];   /* Think carefully about how to initialize this variable. */

    while(index < SIZE){
        //compare maxVal to the next value
        if(maxVal < data[index]){
            maxVal = data[index];
        }

        /* //checking
        printf("data[%i] = %i\t", index, data[index]);
        printf("Now max val is %i\n", maxVal); */

    index++;
    }

    printf("Maximun value in an array is %d\n", maxVal);
    return 0;
}