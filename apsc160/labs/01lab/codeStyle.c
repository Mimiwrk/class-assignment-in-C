/*
Name : Mimi Ngamchaianan
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
*/

#include<stdio.h>   //core input of a functions
#include<stdlib.h>  //general utility functions

int main(void){
    int Number;

    //ask for user input
    printf("Enter a number : ");
    scanf("%d", &Number);

    //output the number
    printf("\nYour number : %d", Number);

    return 0;
}