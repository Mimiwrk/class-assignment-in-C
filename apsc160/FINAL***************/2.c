/*
 * Name : Mimi Ngamchaianan
 * Student# : 85572261
 * Lab section : L1B
 * UBC email : wngamcha@student.ubc.ca
 * Date : Dec18, 2022
*/

#include <stdio.h>
#include <stdlib.h>
/* any other #include directives as needed */

int main(void)
{   

    char str[200];

    //prompt the user to input the string
    printf("Enter any string : ");
    scanf("%s", str);

    int count = 0;
    while(str[count] != '\0'){
        //convert uppercase to lowercase
        if(str[count] >= 65 && str[count] <= 90)
            str[count] += 32;
        //convert lowercase to uppercase
        else if(str[count] >= 97 && str[count] <= 122)
            str[count] -= 32;

        count++;
    }

    // if(str[count] == '\0'){
    //     str[count++] = ' ';
    // }

     //print out the result that is stored in the string
    printf("\"");
    printf("%s", str);
    printf("\"\n");
	return 0;
}