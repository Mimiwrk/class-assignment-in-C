/* 
Author : Mimi Ngamchaianan
Purpose : write a search function 'without using break and return statement' to exit the loops early
*/

#include <stdio.h>

#define NUM_COLS 5
#define NUM_ROWS 2

//function prototype
int search(int value, int array[NUM_ROWS][NUM_COLS]);

int main(void){
    //change i to 0
    int data[][NUM_COLS] = {{1,2,3,4,0},
                            {5,-1,2,3,9}};

    int value;

    printf("Enter the value you want to find : ");
    scanf("%d", &value);

    
    printf("\n");
    printf("%d\n", search(value,data));

}

int search(int value, int array[NUM_ROWS][NUM_COLS]){
    int num;

    for(int row = 0; row < NUM_ROWS; row++){
        for(int column = 0; column < NUM_COLS; column++){
            if(array[row][column] == value){
                num = array[row][column];
                goto EndOfLoop;     //suitible to crazy nested loop
            }
        }
    }
    EndOfLoop:  //idetifier
    return num;
}
