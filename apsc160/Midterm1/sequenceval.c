/*
 * Name : Mimi Ngamchaianan
 * Student# : 85572261
 * Lab section : L1B
 * UBC email : wngamcha@student.ubc.ca
 * Date : Oct 14, 2022
 * purose : write a program that reads in values from the keyboard 
 *          and prints out either the word Valid or Invalid 
 *          (capitalization matters!) 
 * 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int NumSeq; //positive
    int NumOdd; //a check condition
    //int NumElement;
    int count = 0;
    int num;

    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &NumSeq);

    printf("\nAt most how many of the first elements should be odd?");
    scanf("%d", &NumOdd);

    printf("\nEnter the sequence: ");
    scanf("%d", &num);

    if(counter < num){
        printf("\nNext number in sequence: ");
        scanf("%d", &num);
        counter++;
        if(num % 2 == 0){

        }else{
            if(counter > NumOdd){

            }else{
                
            }
        }
    }else

    )

    //(NumOdd % 2 != 0)  true

    printf("Invalid\n");
    printf("Valid\n");
 
return 0;
}