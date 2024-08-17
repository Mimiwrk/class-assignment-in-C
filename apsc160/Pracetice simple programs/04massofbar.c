/*Write a program that prompts the user for the length, width and height
of a solid steel rectangular bar (in metres). 
The program must then compute the mass of the bar in kilograms 
assuming that the density of the steel is 7850 kg per cubic metre. 
Your program must accept only integer inputs, and must print the result with no decimal places.

Recall that: mass = density * volume.
*/

#include<stdio.h>

int main(){
    int density = 7850;
    int Volumn, length, width, height;
    int MASS;

    //ask for the user input
    printf("Enter length, width, height of a solid steel in order : ");
    scanf("%d %d %d", &length, &width, &height);

    //store value into valiables
    Volumn = length * width * height;
    MASS = density * Volumn;

    //print out the mass that is calculated, don't forget ending line break at the end (\n)
    printf("Mass of a solid  steel : %i kg/m^3\n", MASS);
    return 0;
}