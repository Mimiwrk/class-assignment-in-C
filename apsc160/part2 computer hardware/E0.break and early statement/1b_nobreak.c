/* 
Author : Mimi Ngamchaianan
Purpose : convert 1a to do the same tast but without using break statement 
*/

#include <stdio.h>

int main(void){
    //change i to 0
    int i = 0, sum = 0;

    //loop will 
    while( i<3 ){
        //need prefix incrementation
        sum += ++i;
    }

    printf("i=%d, sum=%d\n", i, sum);

}

/* SOLUTION************************************************
int i=1, sum=0;

while(i<=3){
    sum += 1;
    i++;
}
i--; */

/* solution2*********************************************infinite loop
int i=1, sum=0;

while(i<=3){
    sum += i;
    if(i<3)
        i++;
} */