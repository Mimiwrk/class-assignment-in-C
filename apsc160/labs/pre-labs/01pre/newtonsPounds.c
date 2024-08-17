/*
Name : Mimi Ngamchaianan
Lab section : L1B
UBC email : wngamcha@student.ubc.ca

explore the problem of converting a unit of measurement 
from the metric system to the imperial system. 
The program that you will write must:
    -prompt the user for a force in Newtons;
    -compute the equivalent force in pounds;
    -print the equivalent force in pounds rounded to 3 decimal places.
    (Note, you must use the conversion: 1 pound = 4.448 Newtons)
*/

#include<stdio.h>
#include<stdlib.h>

#define Newtons 4.448

int main(void){
    double force_nt;
    double force_lb;

    //ask for user input in newtons
    printf("Enter a force in Newtons : ");
    scanf("%lf", &force_nt);
    
    //calculate force in pound
    force_lb = force_nt / Newtons;

    //output a force in pound
    printf("A force in Pound : %.3lf", force_lb);

    return 0;
}