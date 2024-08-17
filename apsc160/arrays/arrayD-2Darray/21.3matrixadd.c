
/* 
HOW TO PRINT 2D ARRAY AFTER CALL VOID FUNCTION :
    https://youtu.be/WK2VR6Br2AU 
*/
#include <stdio.h>

#define THRESHOLD 5
#define NUMCOLS 2

#define NUMROW 2

//function prototype
void addMatrix(int dataA[][NUMCOLS], int dataB[][NUMCOLS], int result[][NUMCOLS], int numRows);

int main(void){
    int arrayA[][NUMCOLS] = {{2, -3},
                            {-7, 5}};
    
    int arrayB[][NUMCOLS] = {{1, 4},
                            {0, 2}};
    int output[NUMROW][NUMCOLS];


    //print how many number are more than the threshold value
    addMatrix(arrayA, arrayB, output, 2);

    //print result of new 2D array where output = arrayA + arrayB
    for(int i = 0; i < NUMROW; i++){
        for(int j = 0; j < NUMCOLS; j++){
            printf("%2.d ", output[i][j]);
        }
    printf("\n");
    }
}


/*
 * Function: addMatrix
 * Purpose:  Add two 2D arrays.
 *
 * Param: dataA   - the first 2D array
 *                  with numRows rows and NUMCOLS columns
 * Param: dataB   - the second 2D array
 *                  with numRows rows and NUMCOLS columns
 * Param: result  - the resulting 2D array
 *                  with numRows rows and NUMCOLS columns
 * Param: numRows - the number of rows in all arrays.
 *
 * Returns: the sum of the first two arrays, as the third parameter;
 *          nothing is returned via a return statement
 */
void addMatrix(int dataA[][NUMCOLS], int dataB[][NUMCOLS], int result[][NUMCOLS], int numRows)
{
    int row, column;
    //int sum = dataA[index][NUMCOLS] + dataB[index][NUMCOLS];

    //outter loop control row|
    for(row = 0; row < numRows; row++){
        //inner loop control column--
        for(column = 0; column < NUMCOLS; column++){
            result[row][column] = dataA[row][column] + dataB[row][column];
            //printf("%2.d ", result[row][column]); 
        }
    //printf("\n");
    }
}




////correct answer*****************************************************************************
// /*
//  * Function:    addMatrix
//  * Purpose:     Given two 2-dimensional array of type int,
//  *              perform element-wise add to each element int he
//  *              2D array and copy it to a third 2D array
//  *              dimensions 
//  * Parameter:   dataA   -   first operand 2D array
//  * Parameter:   dataB   -   second operand 2D array
//  * Parameter:   dataC   -   resulting 2D array where dataC = dataA + dataB
//  * Return:      void
//  */
// void addMatrix(int dataA[][NUMCOLS],
//                int dataB[][NUMCOLS],
//                int dataC[][NUMCOLS],
//                int numRows)
// {
//     for (int row = 0; row < numRows; row++)
//         for (int col = 0; col < NUMCOLS; col++)
//             dataC[row][col] = dataA[row][col] + dataB[row][col];
// }
