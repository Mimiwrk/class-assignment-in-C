/*
purpose : prompts user for series of positive integers
        it will terminate once user enter -1
        print smallest to largest integer values
        if the first value entered by the user is -1, print error message
*/
#include<stdio.h>
#include<stdlib.h>

#define end -1

int main(void){
    int num;
    int small;
    int large
    int count = 0;

    //prompts user for positive integers
    printf("Enter positive numbers : ");
    scanf("%d", &num);

    //Error, if user enter -1 at the first time
    if(num == end){
        printf("\nError : enter positive number");
    }else{
        while(num != end){


            //program smallest to largest integer values
        }
    }
}