#include <stdio.h>

int main(){
    int size;
    int row, column;

    printf("Enter the size of pascal triangle : ");
    scanf("%i", &size);

    //outter loop control row
    for(row = 1; row <= size; row++){
        for(column = 1; column <= size*2-1; column++){
            if(column >= size-(row-1) && column <= size+(row-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}