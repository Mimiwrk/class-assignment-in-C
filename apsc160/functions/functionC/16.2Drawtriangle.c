/*
* Author : Mimi Ngamchaianan
* Date : Oct 14, 22
* Purpose : write a function drawTri that draws right-angled, 
            isosceles triangle on the screen where the parameters are:
            - side_length: the equal length of the two shorter sides,
            - x and y: the (coordinate) location of the upper vertex
*/
#include <stdio.h>
#include <stdlib.h>

// draws a line from (x_start, y_start) to (x_end, y_end), (2 coordinates : that's why there're 4 parameters)
void drawLine(int x_start, int y_start, int x_end, int y_end);

// this function need 3 coordinates, and it calls top function 3times to draw 3 lines
void drawTri(int side_length, int x, int y)
{
    /*
        side_length = how long is the line
        x = x coordinate
        y = y coordinate
    */
    drawLine(x, y, x, y-side_length);
    dawLine(x, y-side_length, x+side_length, y-side_length);
    drawLine(x, y, x+side_length, y-side_length);

}