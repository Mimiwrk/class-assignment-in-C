/*
Suppose we want to compute the average of a number of non-negative real values entered by the user. 
The user repeatedly enters the values, one at a time, 
and finally enters the value −1 to indicate that there are no more values to enter. 
We then compute the average of the values entered (excluding the −1) and print it on the screen.

If the first number entered by the user is −1 (i.e., the user enters no non-negative values), 
we print the message "Error: no data!" on the screen.

A flowchart that represents a possible solution to this problem is shown below:
 */

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1
/*
We define a constant SENTINEL 
to represent the special value 
(in this case -1) entered by the user 
to indicate the end of the series of data.
*/

int main( void ) {
    double sum = 0.00;    //to calculate the average sum = sum + nextVal;
    double count = 0.00;  //count how many time user input non-negative values
    double nextVal;    //user input
    double average = 0.00; //average = sum / count;

    //ask for user input nextVal
    printf("Enter series of positive integers, terminated by -1 : ");
    scanf("%lf", &nextVal);

    //can't use do while loop because it will always execute once, and we can't output "\nError: no data!"
    while(nextVal != SENTINEL){
        //1.compute the sum of the values entered
        sum = sum + nextVal;
        //2.count+1
        count++;
        //3.ask for user input nextVal again
        printf("\nEnter next positive integer: ");
        scanf("%lf", &nextVal);
    }
    if(count==0){
        //if there is no input
        printf("\nError: no data!");
    }else{
        //compute the average of the values entered
        average = sum / count;
        printf("\nAverage number of user input : %lf", average);
    }
     
    return 0;
}