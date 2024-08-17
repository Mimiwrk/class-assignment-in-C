/*   Author : Mimi Ngamchaianan
*    Student# : 85572261
*    Lab section : L1B
*    UBC email : wngamcha@student.ubc.ca
*    Date Oct18, 22
*    Purpose :  write a C program that prompts the user for the number of rows in Pascal's triangle, 
*               and prints the triangle on the screen
*/


#include <stdio.h>
#include <stdlib.h>

//function prototype
int Factorail(int num);
int n_choose_r(int n, int r);
int getInputInRange(int min, int max);
int 

int main(void){
    int min = 1;
    int max = 12;
    int num_input;

    //call input function to do the task and store the value of number in num_input variable
    num_input = getInputInRange(min, max);

    printf("The value in range of [%d,%d] enterd by user is %d", min, max, num_input);

    return 0;
}

//factorial function(formal parameter)
int Factorial(int num){
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

//choose function(formal parameters)
int n_choose_r(int n, int r){
    return Factorial(n) / (Factorial(r)*Factorial(n-r));
}

//number in range function
int getInputInRange(int min, int max){
    int num;

    /*
        - repetly prompt user for a number until the number between [7, 10] is entered
        - use post test loop
    */
    do{
        printf("Enter a number between %d and %d : ", min, max);
        scanf("%d", &num);

        if(num > max || num < min);
            printf("Error! enter a number in range again\n");
    }while(num > max || num < min);

    return num;
}



