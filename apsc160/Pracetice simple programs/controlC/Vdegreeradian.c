/*
Table of degree and radian
Write a program in C that produces a table of the degree and radian measure of angles 
starting at 0 degrees and increasing at intervals of 45 degrees up to and including 360 degrees. 
We will assume that we are interested only in integer degree values 
and that we want the radian measure printed to 4 decimal places.
*/

#include<stdio.h>   //standard library
#include<stdlib.h>
#include<math.h>    //use for acos()

#define START 0
#define END 360
#define DELTA 45
#define PI acos(-1.0)

int main(void){
    int degree;
    double radian;

    degree = START;
    printf("Degree radian\n");  //printing degree and radian table

    //while loop, loopin guntil !(degree <= END)
    while(degree <= END){
        radian = degree * PI / 180.0;   //convert degree to radian
        printf("%6d %8.4f\n", degree, radian);  //print degree with 6width, radian with 8width(addding space to the left)
        degree = degree + DELTA;    //increases by 45degree
    }

    return 0;
}