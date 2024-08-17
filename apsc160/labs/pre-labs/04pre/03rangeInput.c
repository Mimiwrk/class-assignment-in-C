/*
    Name : Mimi Ngamchaianan
    Student# : 85572261
    Lab section : L1B
    UBC email : wngamcha@student.ubc.ca
    Date : Oct18, 2022
    Purpose : write a function that repeatedly prompts the user 
            to enter an integer value between min and max inclusive
*/

#include <stdio.h>
#include <stdlib.h>

//function prototype
int getInputInRange(int, int);

int main(void){
    int min = 7;
    int max = 10;
    int num_input;

    //call input function to do the task and store the value of number in num_input variable
    num_input = getInputInRange(min, max);

    printf("The value in range of [%d,%d] enterd by user is %d", min, max, num_input);

    return 0;
}


/*
 * Prompts user to enter an integer value 
 * between min and max, inclusive.  Prints an
 * error message and repeatedly prompts for 
 * input, if input it outside required range.
 *
 * Param: min - minimum acceptable input
 * Param: max - maximum acceptable input
 * Returns: number between min and max, inclusive,
 * entered by user.
 */
int getInputInRange(int min, int max){
    int num;

    /*
        - repetly prompt user for a number until the number between [7, 10] is entered
        - use post-test loop
    */
    do{
        printf("Enter a number between %d and %d : ", min, max);
        scanf("%d", &num);

        if(num > max || num < min);
            printf("Error! enter a number in range again\n");
    }while(num > max || num < min);

    return num;
}
