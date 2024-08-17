/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca

purpose : ask for the user input and return the calcualted positioin with 3 decimal places answer

*/

#include <stdio.h>
#include <math.h>

int main(){

    double time;
    double position;

    //prompts the user for a time in second
    printf("Enter the time in second: ");
    scanf("%lf",&time);

    //calculate the 
    position = (4.0*sqrt(time)*sin(4.0*time))/3.0+(pow(cos(7*time),2.0))/2.0+pow(1.0/6.0,time);


    //print the position of the particle in metres at the given time. The position must be printed to 3 decimal places.
    printf("\nPosition of particale : %.3lf m", position);
}



// You might find some of the following functions from the library math.h useful:

// /* returns the square root of num */
// double sqrt(double num);

// /* returns base to the power of exponent */
// double pow(double base, double exponent); 

// /* returns sine of angle (angle measured in radians) */
// double sin(double angle);

// /* returns cosine of angle (angle measured in radians) */
// double cos(double angle);  
