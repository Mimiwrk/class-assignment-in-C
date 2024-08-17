/*
write a program that prompts the user for the price of an article (before taxes) 
and that prints the price of the article including provincial sales tax (PST) at 7% and goods and services tax (GST) at 5%.
You may use code in previous questions as a model.
*/

#include <stdio.h>
#include <stdlib.h>

//define constant value, no need of ;
#define PST 0.07
#define GST 0.05

int main(void){
    //declare the variable
    double Price;
    double afterTAX;

    //ask for user input
    printf("Enter the price of an article : ");
    scanf("%lf", &Price );

    //calculate the price after taxes
    afterTAX = (Price * (PST + GST))+Price;

    //output the value after taxes
    printf("Price after taxes : %f\n", afterTAX);
    return 0;
}