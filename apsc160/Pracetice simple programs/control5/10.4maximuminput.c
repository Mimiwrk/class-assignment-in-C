/*
Suppose we want to determine the largest number of a series of non-negative real values entered by the user. 
The user repeatedly enters the values, one at a time, 
and finally enters the value −1 
to indicate that there are no more values to enter. 
We then print the largest value entered by the user, on the screen. 
If the first number entered by the user is −1 (i.e., the user enters no non-negative values), 
then we’ll print the message “Error: no data!” on the screen. 
(Your program doesn’t have to verify that the numbers are non-negative.)
 */

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1

int main( void ) {
    double Val;
    double Maxval = 0;
    int count = 0;

    //prompt a user input of Val1
    printf("Enter a positive number : ");
    scanf("%lf", &Val);

    //while Value is positive
    while(Val != SENTINEL){
        //increase count by 1
        count++;
        //compare Val and max
        if(Val > Maxval){
            Maxval = Val;
        }
        //prompt a user input of Val2
        printf("\nEnter another positive number : ");
        scanf("%lf", &Val);
    }
    //if there is no number, print an error statement
    if(count == 0 && Val < 0){
        printf("\nError: no data");
    }else{
        printf("\nLargest number : %lf", Maxval);
    }

    return 0;
}
