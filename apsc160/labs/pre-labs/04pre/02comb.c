/*
    Name : Mimi Ngamchaianan
    Student# : 85572261
    Lab section : L1B
    UBC email : wngamcha@student.ubc.ca
    Date : Oct18, 2022
    Purpose : write a function which takes 2 positive integers that computes C(n,r)
*/

#include <stdio.h>
#include <stdlib.h>

//function prototypes
int Factorial(int);
int choose(int, int);

int main(void){
    int n, r, choice;

    //prompt user for an input
    printf("Enter two positive numbers for n and r : ");
    scanf("%d %d", &n, &r);

    //call choose function and store in choose variable
    choice = choose(n, r);

    printf("\nChoose : %d", choice);

    return 0;
}

/*  
 * Function to compute n! (i.e., n factorial)
 *
 * Param: num - the number whose factorial we wish to compute
 * Returns: num!
 * Assume:  num is not negative
 */
//function(formal parameter)
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

/*  
 * Function to compute C(n, r) = n! / (r! * (n - r)!)
 * 
 * Param: n 
 * Param: r
 * Returns: C(n, r)
 * Assume: n and r are positive integers
 */
int choose(int n, int r){
    return Factorial(n) / (Factorial(r)*Factorial(n-r));
}