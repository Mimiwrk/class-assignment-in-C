#include <stdio.h>

//define here for main() and sumColumn function
#define NUMCOLS 4

int sumColumn(int data[][NUMCOLS], int numRows, int colNum);

int main(void){
    //for testing purpose
    int array[][NUMCOLS] = {{1, 2, 3, 5},
                            {4, 5, 6, 0}};

    //want sum of column2
    printf("sum of the given column(vertical) : %d\n", sumColumn(array, 2, 3));

    return 0;
}

/*
 * Function:    sumColumn
 * Purpose:     Given a 2-dimensional array of type int,
 *              the number of rows in the array, and a
 *              column index as parameters, return the
 *              sum of the elements in the specified
 *              column.
 * Parameter:   data    -   the 2D array
 * Parameter:   numRows -   the number of rows in the array
 * Parameter:   colNum  -   the column index to sum
 * Return:      the sum of the elements in the 'colNum' index
 */
int sumColumn(int data[][NUMCOLS], int numRows, int colNum)
{
    int row;    //control vertically
    int sumCol = 0;
    for (row = 0; row < numRows; row++)
        //print the sum of given column from row 0 to last row(vertically)
        sumCol += data[row][colNum-1];

    return sumCol;
}