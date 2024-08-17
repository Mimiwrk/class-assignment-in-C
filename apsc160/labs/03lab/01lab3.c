/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date : Oct 12, 2022
purose : Write a program that prompts the user for an integer num 
        in the range 1 to 21, inclusive (i.e., including 1 and 21).

*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
        
        //scanf("%i", &num);
    do{
        //printf("");
        scanf("%i" , &num);
        if(num > 21 || num < 1)
            printf("error");
    }while(num > 21 || num < 1);

    printf("\nYou entered: %i", num);

return 0;
}