/*
Suppose that in an APSC 160 lab, students were asked to write a program that prompts the user for a temperature in Celsius 
and that prints the corresponding temperature in Fahrenheit on the screen. 
Remember that the conversion is done with:
F=(9/5)C + 32
Let's assume that a friend of yours has written the following program. Your friend tested the program by entering a value of 0°C and got the expected value of 32°F. 
In spite of the test that was conducted, the program is not correct.
Identify the problem, and fix it.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    double celsius;
    double fahrenheit;
    
    //ask for user inpit in celsius
    printf( "Please enter a Celsius temperature: \n" );
    scanf( "%lf", &celsius );
    
    //convert celcius to fahrenheit, change from 9/5 to 9.0/5.0
    fahrenheit = 9.0 / 5.0 * celsius + 32;
    
    //out put the value in fahrenheit
    printf( "Corresponding Fahrenheit temperature: %lf\n", fahrenheit );
    
    system( "PAUSE" );
    return 0;
}