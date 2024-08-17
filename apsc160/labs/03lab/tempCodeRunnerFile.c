/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date : Oct12, 2022
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    int row, column, count;
        
        //scanf("%i", &num);
    do{
        //printf("");
        scanf("%i" , &num);
        if(num > 21 || num < 1)
            printf("error");
    }while(num > 21 || num < 1);

    printf("\nYou entered: %i", num);
    printf("\n");

    //control column
    count = 0;
    for(column = 1; column <= num; column++){
        //control row
        for(row = 1; row <= num; row++){
            printf("%3.i", count);
            count++;
        }
    printf("%3.i", count);
    printf("\n");
    }

return 0;
}