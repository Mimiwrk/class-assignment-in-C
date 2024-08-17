#include <stdio.h>

int main(void){
 
    int row;
    int column;
    int size = 5;

    column = 1;
    while(column <= size){

        row = 1;
        while(row <= size){
            printf("* ");
        row++;
        }

    
    printf("\n");
    column++;
    }


return 0;
}