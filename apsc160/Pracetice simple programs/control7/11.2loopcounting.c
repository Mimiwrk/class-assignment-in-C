#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x;
    int y = 0;
    int deltax;
    int deltay;
    int temp;
    
    printf("Enter x, y : ");
    scanf("%d %d", &deltax, &deltay);

    //outter loop contrl row; but since we use \n, this one represent a value of column(y)
    while(y < 10){
        printf("line:%d\t", y);
        x = 0;
        //inner loop control column; but represent a value of row(x)
        while(x < 20){
            temp = x*y;
            printf("%d ", temp);
            x+=deltay;
        }

    printf("\n");
    y+=deltax;
    }
    return 0;
}