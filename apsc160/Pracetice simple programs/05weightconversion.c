/*
Suppose that in an APSC 160 lab, students were asked to 
write a program that prompts the user for a weight in kilograms and that prints the corresponding weight in pounds on the screen. 
Assume a conversion rate of 2.2 pounds to the kilogram. 
Let's assume that a friend of yours has written the following program.
The program compiles and runs but, unfortunately, it doesn't produce the correct output. Identify the problem, and fix it.
*/
#include <stdio.h>
#include <stdlib.h>

//define constant value
#define LBS_PER_KG 2.2

int main( void ) {
  
    double weightKgs;
    double weightLbs;
  
    //ask user for a weight in kg
    printf( "Please enter a weight in kilograms: " );
    scanf( "%lf", &weightKgs );
  
    //converse kg to lbs
    weightLbs = LBS_PER_KG * weightKgs;

    //print weight in pounds on the screen
    printf( "Corresponding weight in lbs: %.2f\n", weightLbs );
  
    system( "PAUSE" );
    return 0;
}