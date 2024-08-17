#include <stdio.h>


//function prototype
int indexOfSmallest( int data[], int size, int startIndex );

//this functioin is for testing
int main(void){
    //int data[] = { 4, -1, 3, 8, 7, 2, 9 };
    int data[] = {203, 804, 6};
    int size = 3;
    //first intex to look at
    int startIndex = 0;

    printf("position of smallest value : %d", indexOfSmallest(data, size, startIndex ));
}

/*
 * Function:  indexOfSmallest
 * Purpose:   Find the index of the smallest item in an array searching
 *            from left to right, but starting at a specified index.
 * Param:     data       - the array to be searched
 * Param:     size       - the number of elements in the array
 * Param:     startIndex - the index where the search is to start
 * Return:    the index of the smallest value in data[startIndex],
 *            data[startIndex+1], ..., data[size-1]
 */
int indexOfSmallest( int data[], int size, int startIndex ) {
    int min_num = 10;   //don't set min_num = 0; set to something higher
    int position;

    for(startIndex; startIndex<size; startIndex++){
        if(min_num > data[startIndex]){
            //min_num = data[startIndex];
            //position of minimun value
            position = startIndex;
        }
    }
    return position;
}

int indexOfSmallest( int data[], int size, int startIndex ) {
    int index;
    int position_min = startIndex;    //set first value in an index to be a minimum value

    //start from the next index(because we already know the value of first index)
    for( index = startIndex + 1; index < size; index++ ) {
        //then we can compare the first index(position_min) to the next index value, if next index value is less than the first index value, replace the next index into position_min
        if( data[ index ] < data[ position_min ] )
            position_min = index;
    }

    return position_min;
}


/*

//this will return the smallest value in an index but not to position
int indexOfSmallest( int data[], int size, int startIndex ) {
    int min_num = 0;
    int index = startIndex;
    
    for(index; index<size; index++){
        if(min_num > data[index]){
            min_num = data[index];
        }
    }
    return min_num;
}
*/


/*
//correct answer*********************************************************************************************
int indexOfSmallest( int data[], int size, int startIndex ) {
    int index;
    int indexOfMin = startIndex;    //set first value in an index to be a minimum value

    //start from the next index(because we already know the value of first index)
    for( index = startIndex + 1; index < size; index++ ) {
        //then we can compare the first index(indexOfMin) to the next index value, if next index value is less than the first index value, replace the next index into indexOfMin
        if( data[ index ] < data[ indexOfMin ] )
            indexOfMin = index;
    }

    return indexOfMin;
}
*/