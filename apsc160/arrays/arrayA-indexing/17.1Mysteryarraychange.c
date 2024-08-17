/*
    Name : Mimi Ngamchaianan
    Student# : 85572261
    Lab section : L1B
    UBC email : wngamcha@student.ubc.ca
    Date : Oct18, 2022
    Purpose : write a function for factorial calculation
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main( void )
{
    int data[] = { 5, 23, 2, -4, 7, 12 };
    int indexL = 0;
    int indexR = SIZE - 1;  //6-1 = 5
    int temp;
    
    //increase first half and decrease the second half, then swap while that ia happening
    while( indexL < indexR )
    {
        //set temp = data[0], then change to temp = data[1] and so on after the loop is repeated
        temp = data[ indexL ];

        //swap value data[0] to be data[5]
        data[ indexL ] = data[ indexR ];
        //set index-5 equal to temp, meaning swap data[5] to be data[0]
        data[ indexR ] = temp;

        //increase from index-0 to index-1 and so on, decrease index-5 to index-4 and so on
        indexL++;
        indexR--;
    }
    
    printf( "Process has completed. \n" );

    //print an array after it is swapped   //my code
    for(indexL=0; indexL < SIZE; indexL++){
        printf("%d ", data[indexL]);
    }

    return 0;
}

//What will be the value of the elements of array data when the code above reaches the printf statement?