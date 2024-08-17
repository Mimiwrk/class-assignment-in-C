#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double a;
    double b;
    ////works
    //b = pow(a,2)/(1+pow(a,2)) + 5.0/6.0;
    b = a*a / 1 + a*a +5.0/6.0;

    ////doesn't work
    //b = a^2 / 1 + a^2 +5.0/6.0;


    printf("%lf", b);
}