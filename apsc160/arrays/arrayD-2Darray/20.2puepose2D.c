/*
purpose : return the maximum value in the given row.
*/

#include <stdio.h>

#define NUMCOLS 3

int noName(int data[][NUMCOLS], int rowNum);

int main(void){
    int array[][NUMCOLS] = {{1, 3, 2},
                            {4, 5, 6}};

    //print the maximum value in the row of index1(second row)
    printf("%d ", noName(array, 1));
}


int noName(int data[][NUMCOLS], int rowNum){
    int i;
    int x = data[rowNum][0];    //start from the first value in the given index of specified row(ex. 4 in second row OR 1 in the first row)

    for (i = 0; i < NUMCOLS; i++){
        //compare the value in given index of row to x, and store the new max value in x if there is
        if (data[rowNum][i] > x)
            x = data[rowNum][i];
    }
    //return the maximum value in that row.
    return x;
}