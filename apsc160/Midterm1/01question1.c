/*
 * Name : Mimi Ngamchaianan
 * Student# : 85572261
 * Lab section : L1B
 * UBC email : wngamcha@student.ubc.ca
 * Date : Oct 14, 2022
 * purose : Write a program that prompts the user for an integer num 
 *         in the range 1 to 21, inclusive (i.e., including 1 and 21).
 * 
*/
#include <stdio.h>

int main(void){
 
return 0;


    int a = 20;
    int b = 10;
    int c = 9;

/*     printf("Enter three unique integers (no duplicates):\n");
    scanf("%d", &a); 
    scanf("%d", &b); 
    scanf("%d", &c); */

    if ( a>b ) {
        if ( b>c ) {
            printf("No");
        } else if ( a>c ) {
            printf("No");
        } else {
            printf("No");
        }
    } else if ( a>c ) {
        printf("No");
    } else if ( b>c ) {
        printf("Yes");
    } else {
        printf("Yes");
    }
}