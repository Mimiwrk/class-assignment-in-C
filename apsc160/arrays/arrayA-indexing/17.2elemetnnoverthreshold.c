/*
 *   Name : Mimi Ngamchaianan
 *   Student# : 85572261
 *   Lab section : L1B
 *   UBC email : wngamcha@student.ubc.ca
 *   Date : Oct18, 2022
 *   Purpose : print the number of values in the array that are above the THRESHOLD value
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define THRESHOLD 5

int main( void )
{
    int data[] = { -5, -7, 3, 1, 0, 23, -14, 35, 12, 16 };
    int index = 0;
    int count;

    while(index < SIZE){
        //print the valuses that are above threshold value
        if(data[index] > THRESHOLD){
            count++;
            //printf("%d ", data[index]);               /*check which number are above thedhold value*/
        }
    index++;
    }

    //count how many number are above the threshold value
    printf("%d", count);

    return 0;
}