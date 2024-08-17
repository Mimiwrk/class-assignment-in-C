/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
*/

#include<stdio.h>   //core input of a functions
#include<stdlib.h>  //general utility functions
#include<math.h>    //general math functions

int main(void){
    double position;
    double time;

    //prompts the user for a time  in seconds 
    printf("Enter a time in seconds : ");
    scanf("%lf", &time);

    //calculate the posion
    position = pow((3.0/5.0),time) + ((7.0*sqrt(time)*sin(6.0*time))/2.0) + ((cos(5.0*time)/6.0));

    //print the position of the particle in metres at the given time(3 decimal places)
    printf("\nPosition of a particle : %.3lf", position);

    return 0;
}