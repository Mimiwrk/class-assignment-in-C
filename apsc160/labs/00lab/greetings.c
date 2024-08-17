/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
*/

#include<stdio.h>
#include<stdlib.h>

//constant
#define MAX_NAME_LENGTH 100

int main(void){
    char name[MAX_NAME_LENGTH];

    printf("Please enter your first name: ");
    scanf("%s", name);
    printf("\nHello, %s, welcome to APSC 160!\n\n", name);

    system("PAUSE");
    return 0;
}
