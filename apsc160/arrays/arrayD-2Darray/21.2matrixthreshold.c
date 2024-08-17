/* 
    purpose:   Write a function that takes a 2D array 
            of type int, a row index, and an integer threshold value as parameters. 
            The function must return the number of entries on the specified row of the array 
            that are smaller than the given threshold value.(number of entries = how many numbwer we found under threshold value)
 */

#include <stdio.h>

#define THRESHOLD 5
#define NUMCOLS 4

int belowThresholdOnRow(int data[][NUMCOLS], int rowIndex, int threshold);

int main(void){
    int array[][NUMCOLS] = {{4, 13, 3, 9},
                            {1, 3, 2, 20}};

    //print how many number are less than the threshold value
    printf("%d ", belowThresholdOnRow(array, 0, THRESHOLD));

}


/* determine how many entries in an array are below threshold value
 * param : data - 2Darray of data
 * param : rowIndex - a row that we want to find number below threshold value
 * param : threshold - the threshold value
*/
int belowThresholdOnRow(int data[][NUMCOLS], int rowIndex, int threshold) {
    //int smaller_num;
    int count = 0;
    
    for(int index = 0; index < NUMCOLS; index++){
        if(data[rowIndex][index] < threshold)
            //smaller_num = data[rowIndex][index]; 
            count++;
    }

    return count;
}