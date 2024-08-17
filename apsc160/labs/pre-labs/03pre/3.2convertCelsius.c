/*
Author : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date :Oct12, 2022
Purpose : write a program in C that creates a table 
        of temperatures in degrees Celsius and 
        the corresponding temperature in degrees Fahrenheit.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //user inputs
    double celcius;
    double increment;
    double numTemps;    //control column
    //clculate
    double Fahrenheit;
    int row, column;

    //prompt the user for the starting temperature
    printf("Please enter starting temperature in degrees Celsius: ");
    scanf("%lf", &celcius);
    //prompt the user for the increment from one Celsius temperature to the next in the table
    printf("Please enter the increment: ");
    scanf("%lf", &increment);

    //print an error message if value is negative and prompt the user to enter the value again. using do-while loop
    do{
    //prompt the user for the number of temperatures to be converted
    printf("Please enter the number of temperatures to convert: ");
    scanf("%lf", &numTemps);

        printf("Error : please enter a positive number\n\n");
    }while(numTemps <= 0);

    printf("\n");
    //control column if there's "\n"
    for(int column = 1; column <= numTemps; column++){
        //claculate celcius to fahrenheit
        Fahrenheit = ((9.0/5.0)*celcius) + 32.0;        //*****DO NOT FORGET TYPE OF VARIABLE

        //control row
        for(int row = 1; row < 2; row++){
            printf("%.2lf\t", celcius);
            printf("%.2lf", Fahrenheit);
            celcius += increment;
        }
    printf("\n");
    }
return 0;
}


    /*print to the screen a table of values having two columns. 
        The first column is a list of temperatures in degrees Celsius, and the second column is a list of corresponding temperatures in degrees Fahrenheit. 
    */