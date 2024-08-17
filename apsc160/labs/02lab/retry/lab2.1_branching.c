/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
date : Dec 8, 2022

purpose : Threshold value voltage(branching)
*/

/*
Write a program in C that prompts the user for three double-precision input values, in this order:
    First voltage, in Volts (e.g. 6.7)
    Second voltage, in Volts (e.g. 4.2)
    A threshold value (e.g. 11.1)


Your program must print a message as follows:

    If any of the three input values is negative, print the message: Error: input values not valid. and do nothing else.
    If both of the voltage values are greater than the threshold value entered by the user, print the message Warning: voltages exceeded threshold. and do nothing else.
    In all other cases, print the message Operating under normal conditions. and then print out the spread between the two voltages to 2 decimal places on a new line. For example, if the pairs of voltages are 5.0 and 3.9, or 3.9 and 5.0, print out the message: The spread of the input voltages is 1.10.

Hint You might find the following function in the math.h library useful:
    double fabs( double num );
This function returns the absolute value of the input num.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double voltage1, voltage2, threshold, num;

    //prompt the user for three double-precision input values
    printf("Enter the first voltage : ");
    scanf("%lf", &voltage1);

    printf("\nEnter the second voltage : ");
    scanf("%lf", &voltage2);

    printf("\nEnter the threshold value : ");
    scanf("%lf", &threshold);

    //check the conditions of the voltage against threshold value
    if(voltage1<0 || voltage2<0 || threshold<0){
        printf("\nError: input values not valid ");

    }else if(voltage1>threshold && voltage2>threshold){
        printf("\nWarning: voltages exceeded threshold");

    }else{
        printf("\nOperating under normal conditions");
        //calculate the voltage
        num = fabs(voltage1 - voltage2);
        //print out the calculated voltage
        printf("\nThe spread of the input voltages is : %.2lf\n", num);

    }

    return 0;
}