/* 
 * Author:
 * Date:
 * Purpose: Compute the position of a particle of mass oscillating
 *          on a spring with no external forces at the given time.
 *          The user is prompted for the initial position, initial
 *          velocity, and a time. We'll assume a mass of 2 units
 *          and a spring constant of 0.5.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //include this to use math function

//constant value
#define MASS      2.2
#define STIFFNESS 0.5

int main(void) {
    double Iposition, Ivelocity, time;
    double frequency;
    double motion;
    frequency  = sqrt(STIFFNESS/MASS);
    
    //ask for the initial position, initial velocity, time
    printf("Pleace enter the intitial position, initial velocity, and time in order : ");
    scanf("%lf %lf %lf", &Iposition, &Ivelocity, &time);
    
    //compute position of a particle(m)at a given time(s)
    motion = Iposition*(cos(frequency*time))+((Ivelocity/frequency)*sin(frequency*time));
    
    //output in 3 decimal places
    printf("Position of a particle : %.3lf\n", motion);
    return 0;
}