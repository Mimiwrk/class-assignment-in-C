/*
Name : Mimi Ngamchaianan
Lab section : L1B
UBC email : wngamcha@student.ubc.ca

write a program that:
    -the user for the length (in metres) of each of
    first segment (AB) and the second segment (BC) of the robot arm;
    -prompts the user for the angle that the first segment of the robot arm makes with the positive x-axis, 
    measured counterclockwise in radians from the positive x-axis (see angle1 on the diagram above);
    -prompts the user for the angle that the second segment of the robot arm makes with the positive x-axis, 
    measured counterclockwise in radians from the positive x-axis (see  on the diagram above);
    -computes the coordinates of point C;
    -prints the coordinates of point C on the screen.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    //input
    double length_ab;
    double length_bc;
    double theta1;
    double theta2;
    //output
    double c_x;
    double c_y;

    //prompts the user for the length (in metres) of the robot arm
    printf("Enter the positive length of the robot arm of AB and BC in order(in metres) : ");
    scanf("%lf %lf", &length_ab, &length_bc);

    if(length_ab<0 || length_bc<0){
        exit(0);    //terminate the program
    }
    else{
        //prompts the user for the angle that the first segment of the robot arm
        printf("\nEnter an angle theta1 of the robot : ");
        scanf("%lf", &theta1);  

        //prompts the user for the angle that the second segment of the robot arm
        printf("\nEnter another angle theta2 of the robot : ");
        scanf("%lf", &theta2); 

        //computes the coordinates of point C
        c_x = length_ab*cos(theta1) + length_bc*cos(theta2);
        c_y = length_ab*sin(theta1) + length_bc*sin(theta2);

        //prints the coordinates of point C
        printf("\nThe corordinates of point C : (%lf, %lf)", c_x, c_y);
    }
    return 0;
}