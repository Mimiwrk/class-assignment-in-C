/*
purpose : Loop on 2D Array: What does it do? --- x is the sum of the array's diagonal elements.
*/
#include <stdio.h>

int main(void){
    int data[][5] = {{2, 0, -8, 5, -7},
                     {5, 0, 5, 2, -7},
                     {4, -3, -7, 4, 0},
                     {-7, 5, 7, -1, -2},
                     {1, -6, 7, -1, -7}};
    int x = 0;

    for (int index = 0; index < 5; index++)
        x += data[index][index];     //x = 0 +2+0+(-7)+(-1)+(-7)

    //x is the sum of the array's diagonal elements.
    //draw a picture to see
    printf("%d", x);

    return 0;
}