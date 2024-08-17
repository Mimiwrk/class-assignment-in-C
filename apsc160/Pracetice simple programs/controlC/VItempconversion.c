/*
Write a program that repeatedly converts a Celsius temperature, entered by the user, to the equivalent Fahrenheit temperature.
After each conversion the program must ask the user if they wish to convert another value. 
The user enters 0 for no and any other value for yes.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    double Celcius;
    double Fahrenheit;
    int doAgain;

    do{
    //ask user input for temp in celcius
    printf("Enter temperature in celcius : ");
    scanf("%lf", &Celcius);

    //convert celcius to fahrenheit
    Fahrenheit = 9.0/5.0 * Celcius + 32.0;
    //print temp in fahrenheit 
    printf("\nTemperature in fahrenhe : %.2lf", Fahrenheit);

    //ask user if want to convert another
    printf("\nConvert another? \nEnter 0 for no, otherwise - yes : ");
    scanf("%d", &doAgain);

    }while(doAgain!=0);

    return 0;
}