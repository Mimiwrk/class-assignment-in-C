#include <stdio.h>

int main(void){
    int outside, inside;
    int size = 5;


    //outter loop 
    outside = 1;                //initialize before the loop
    do{
        printf("%i", outside);

*           //inner loop
*           inside = 1;             //initialize before the loop
*           do{
*               printf("*");
*               inside++;
*           }while(inside <= size);

        printf("\n");                  //new line after inner loop, and after printing smth
        outside++;
    }while(outside <= size);

return 0;
}