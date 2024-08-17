/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date : Oct 28, 2022
purpose : Write a function geoMean that returns as a double-precision number the geometric mean of an array.
*/

#include <stdio.h>
#include <math.h>   //for pow(base, exponent);


#define SIZE 7

//function prototype
double geoMean(int data[], int size);

int main(void){
    int array[] = {1.0, 3.0, 6.0, 8.0, 200.0, 31.0, 31.0};

    printf("%lf\n", geoMean(array, SIZE));

    return 0;
}

/* 
 * function that calculate the geometric mean of an array
 * 
 * Param : data[] - input array
 * param : size - size of an arry that is used to control the loop to access each value in each index of an array
 * return : the geometric mean value
*/
double geoMean(int data[], int size){
    double product = 1.0;
    int count = 0;

    for(int index = 0; index < size; index++){
        product *= data[index];
        count++;
    }
    double power = 1.0/count;

    //the geometric mean of an array
    return pow(product, power);
}