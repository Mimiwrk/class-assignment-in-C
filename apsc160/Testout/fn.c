#include <stdio.h>
#include <stdlib.h>

void tryToSwap(int, int);

int main(void)
{
    int num1 = 4;
    int num2 = 8;

    printf("%d %d\n", num1, num2);
    tryToSwap(num1, num2);
    printf("%d %d\n", num1, num2);
    
    return 0;
}

void tryToSwap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    //printf("%d %d\n", num1, num2);
}