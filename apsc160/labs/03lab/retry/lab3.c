/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
date : Dec 8, 2022

purpose : Write a program that prompts the user for an integer num in the range 1 to 16, inclusive.
*/

/* 
PART1 : prompting for a number in a range
Write a program that prompts the user for an integer num in the range 1 to 16, inclusive (i.e., including 1 and 16).

-If the user enters a value that is not in the desired range, you must print an error message and prompt for another value until a value in the desired range is entered.

Having obtained a value in the desired range, your program must then print the message:
-You entered: x
where x is the value entered by the user.

The flowchart below represents an algorithm for this problem. Note that (*) represents a Boolean expression that is true when the number entered by the user is not valid, and false otherwise. You will need to construct this Boolean expression yourself.
*/

/*
PART2 : printing a number in sequence
In part 1 you created a program that prompts the user for an integer num. 
Add code to your program from part 1 so that it prints the integers from 1 to num and from num to 1. 
Each number must be printed in a region of width 3 (with no additional spaces between the numbers) as shown in the Example Outputs below.
*/

/*
PART3 : displaying grid of number
Build upon the work you made in previous parts, adding code to your program so that 
it prints a grid pattern of numbers that looks like the ones shown in Example Outputs below. 

Note that all numbers must be printed using 3 characters, with spaces on the left as needed, 
and no extra space between the numbers, as in part 2.
*/

#include <stdio.h>

#define ROW 2

int main(){
    int num, height, width, count;


    //part1
    //prompt the user for the number until the number is in range of [1,16]
    do{
        printf("Enter number in range [1,16] : ");
        scanf("%i",&num);

        if(num < 1 || num > 16)
            printf("error\n");

    }while(num < 1 || num > 16);
    
    printf("You entered: %i\n", num);
    printf("\n");

    //part2
    //print the sequence of number
    height = 1;
    while(height <= ROW){
        width = 1;
        if(height == 1){
            count = 1;
            while(width <= num){
                printf("%3.i",count);
            count++;
            width++;
            }
        }else{
            count = num;
            while(width <= num){
                printf("%3.i",count);
            count--;
            width++;
            }
        }

        printf("\n");
        height++;
    }


    printf("\n");

    //part3
    //displaying grid of number
    height = num;
    while(height >= 1){

        width = 1;
        count = height;
        while(width <= num){
            printf("%3.i",count);
        count++;
        width++;
        }

        printf("\n");
        height--;
    }


    return 0;
}