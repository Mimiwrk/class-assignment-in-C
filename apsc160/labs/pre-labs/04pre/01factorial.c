/*
    Name : Mimi Ngamchaianan
    Student# : 85572261
    Lab section : L1B
    UBC email : wngamcha@student.ubc.ca
    Date : Oct18, 2022
    Purpose : write a function for factorial calculation
*/

#include <stdio.h>
#include <stdlib.h>

//function prototype 
int factorial(int num);

int main(void){
    int number;
    int Factorial;

    //prompt user for an input
    printf("Enter a positive number : ");
    scanf("%d", &number);

    //store value in a valiable factorial from a function(actual parameter)
    Factorial = factorial(number);

    //print final value
    printf("%d! is %d", number, Factorial);

    return 0;
}

//function(formal parameter)
int factorial(int num){
    int result = 1;
    
    //if number is 0 or 1 return integer 1
    if(num == 0 || num == 1){
        return 1;
    //else do the work!!!
    }else{
        while(num > 1){
            //(1*num)(1*num-1)(1*num-2)
            result *= num;
            num--;
        }
    }
    return result;
}