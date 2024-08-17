
/* 
-Write a function transpose that takes two 2D arrays, data and dataT, as parameters. 
-Assume that NUMROWS and NUMCOLS have been defined to be the number of rows and number of columns in the array named data, respectively. 
-Further, the number of rows in data is equal to the number of columns in dataT, 
    and the number of columns in data is equal to the number of rows in dataT. 
-At the end of the function call, column i of dataT 
    should be equal to row i of data, 
    for each i from 0 to (NUMROWS - 1).
*/
#include <stdio.h>

#define NUMROWS 3
#define NUMCOLS 2

//function prototype for switching row and column, and output into another array
void transpose(int data[][NUMCOLS], int dataT[][NUMROWS]);

int main(void){
    int arrayA[][NUMCOLS] = {{1, 2}, {2, 4}, {5, 3}};
    int arrayB[NUMCOLS][NUMROWS];   //switch #row and column from arrayA


    //print how many number are more than the threshold value
    printf("Transpose of the metrix : \n");
    void transpose(arrayA, arrayB);
    printf("%d ", arrayB[NUMCOLS][NUMROWS]);
    printf("\n");

}

void transpose(int data[][NUMCOLS], int dataT[][NUMROWS])
{   
    //use nested for loop to run through normal index value(data[][NUMCOLS])
    for(int row = 0; row < NUMROWS; row++){
        for(int column = 0; column < NUMCOLS; column++){
            //switch row and column for dataT[][]
            dataT[column][row] = data[row][column];
        }
    }
}




// //correct answer******************************************************************
// /*
//  * Function:    transpose
//  * Purpose:     Given two 2-dimensional array of type int,
//  *              transpose the first 2D array by copying it
//  *              to another 2D array of the appropriate
//  *              dimensions 
//  * Parameter:   data    -   the 2D array
//  * Parameter:   dataT   -   the output transposed 2D array   
//  * Return:      void
//  */
// void transpose(int data[][NUMCOLS], int dataT[][NUMROWS])
// {
//     for (int row = 0; row < NUMROWS; row++)
//         for (int col = 0; col < NUMCOLS; col++)
//             dataT[col][row] = data[row][col];
// }
