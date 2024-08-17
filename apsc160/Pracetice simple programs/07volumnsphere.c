#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//constant value of pi 3.41
#define PI acos(-1.0)

int main(void) {    
    double radius;
    double volumn;
    //double pow(double radius, double 3);

    //ask for radius of sphere in cm
    printf("Please enter the radius of sphere in cm : ");
    scanf("%lf\n", &radius);

    //calculate volumn of sphere
    volumn = (4.0/3.0)*PI*(pow(radius, 3));

    //print volumn of sphere in cm^3
    printf("Volumn of sphere : %lf cm^3", volumn);

    return 0;
}