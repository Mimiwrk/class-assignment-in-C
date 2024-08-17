/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date : Oct 28, 2022
purpose : Write a function avgRange that returns as a double-precision number the average of elements from index start to index end inclusively
*/

#include <stdio.h>

//function prototype
double avgRange(int data[], int n, int start, int end);

int main(void){
    int array[] = {1, 3, 6, 8, -200, 31, 31};
    int start = 0;
    int end = 0;

    printf("%lf\n", avgRange(array, start, end));

    return 0;
}

/* 
 * function that calculate the average value in an array
 * 
 * param : data[] - the array 
 * param : start - the start index in an array
 * param : end - the end index in an array that is used to control the loop
 * return : avarage value of an array
 */
double avgRange(int data[], int n, int start, int end){
    double sum = 0.0;
    int range = 0;
    int index;

    for(index = start; index <= end; index++){
        sum = sum + data[index];
        ++range;
    }

    //average value in an array
    return sum/range;
}