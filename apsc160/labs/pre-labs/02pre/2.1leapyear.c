/* Author: Mimi Ngamchaianan
 * Student Number:  58872261
 * E-mail Address:  wirakarn.ngam@gmail.com
 * Lab Section: L1B
 * Date: October 5,2022
 * Purpose: Prompts the user for a year, determines whether or not the year is a leap year,
 *          and prints the result on the screen
 */

#include <stdio.h>
#include <stdlib.h>

#define GregorianCal 1582

int main(void){
    int year;

    //prompts the user for a year
    printf("Enter a year : ");
    scanf("%i", &year);

    if(year < GregorianCal){
        printf("The Gregorian Calendar had not been adopted at that time\n");
    }else{
        //year is divisible by 100 and is not divisible by 400
        if(year%100 == 0 && year%400 != 0){
            printf("%i is not a leap year\n", year);
        }
        //year that is divisible by 4
        else if(year % 4 == 0){
            printf("%i is a leap year\n", year);
        }
        //year that is not divisible by 100 and 4
        else {
            printf("%i is not a leap year\n", year);
        }
    }
return 0;
}