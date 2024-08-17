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
    int row, column, count = 0;
        
        //scanf("%i", &num);
    do{
        //printf("");
        scanf("%i" , &num);
        if(num > 21 || num < 1)
            printf("error");
    }while(num > 21 || num < 1);

    printf("\nYou entered: %i", num);
    printf("\n  0");

    //control column
    //count = 0;
    for(column = 0; column < num; column++){
        //control row
        for(row = 0; row < column; row++){
            printf("%3.i", count);
        }
    printf("%3.i", count);
    printf("\n");
    count++;
    }

return 0;
}




/* 
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
    for(column = 1; column <= num; column++){
        //control row
        count = 0;
        for(row = 1; row <= column; row++){
            printf("%3.i", count);
            count++;
        }
    printf("%3.i", count);
    printf("\n");
*/
