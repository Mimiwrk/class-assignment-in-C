/* 
 * Author: Mimi Ngamchaianan
 * Date: Oct 11, 22
 * Purpose: prints the temperature at equally spaced points on a metal
 * plate of length L and height H according to the formula:
 * T( x, y ) = 10 sin( 2 pi x / L ) cos( 2 pi y / H )
 * User is prompted for grid spacing in x and y directions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LENGTH 100
#define HEIGHT 60
#define PI acos(-1.0)

//function prototype
double getTemperature(int x, int y);
void printRow(int lenght, int height);

int main(void)
{
    int deltaX;
    int deltaY;
    int y = HEIGHT;     //control the height and outter loop
    int x = 0;          //control the lenght and inner loop

    printf("Enter grid spacing in x-direction: ");
    scanf("%d", &deltaX);
    printf("Enter grid spacing in y-direction: ");
    scanf("%d", &deltaY);


    //Now we control a column(y) by adding "\n" inside outter loop but outdide inner loop(Usually outter loop control row if there is no "\n")
    while (y >= 0)
    {   
        //print the first column of every line to count the space in between each column, print 60 first until it reaches 0
        printf("y = %2d: ", y);

        //this is the actual function that call the formal function that act as an innner loop to control row
        printRow(y, deltaX);

        y -= deltaY;    //we decrease the value because we want to print from max height to zero
    }

    return 0;
}

/*
 * Returns temperature at given point on plate.
 * Param: x - x-coordinate of point
 * Param: y - y-coordinate of point
 */
double getTemperature(int x, int y)
{   
    return (10 * sin(2 * PI * x / LENGTH) * cos(2 * PI * y / HEIGHT));
}

/*
 * Prints a row of temperatures at equally spaced points
 * on the screen.
 * Param: y - y-coordinate of row to be printed
 * Param: deltaX - spacing between points
 */
void printRow(int rowY, int spaceX){
    int rowX = 0;
    while(LENGTH >= rowX){
        //call the formal function that calculate the temperature into another function
        printf("%5.2lf ", getTemperature(rowX, rowY));
        rowX += spaceX;
    }
    printf("\n");
}