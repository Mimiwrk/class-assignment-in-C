#include<stdio.h>
#include<stdlib.h>

int main(void){
int s = 0;
int n;

printf("Enter series of positive integers, terminated by -1 : ");
scanf("%d", &n);

while (n != -1 ) {
    if (n % 2 == 0) 
        s++;

    printf("Enter next positive integer: ");
    scanf("%d", &n);
}

printf("Calculated value: %d\n", s);

return 0;
}