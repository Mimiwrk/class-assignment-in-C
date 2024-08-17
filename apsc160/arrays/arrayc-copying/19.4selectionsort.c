#include <stdio.h>


//function prototypes
int indexOfSmallest( int data[], int size, int startIndex );
void sort( int data[], int size );

//this functioin is for testing
int main(void){
    int data[] = { 4, -1, 3, 8, 7, 2, 9 };
    int size = 7;
    /////int data[]  = { -1, 2, 3, 4, 7, 8, 9 }     //sorted number set


    printf("sorted array : ");
    sort(data, size);
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
    int position, index;

    //check value from start index to the last index(size-1)
    for(index = startIndex; index<size; index++){
        //if the value is less than 10, set that value in min_num variable
        if(min_num > data[index]){
            //store the value(we don't need it in this question)
            min_num = data[index];
            //position of minimun value
            position = index;
        }
    }
    return position;
}

// //correct answer*********************************************************************************************
// int indexOfSmallest( int data[], int size, int startIndex ) {
//     int index;
//     int indexOfMin = startIndex;    //set first value in an index to be a minimum value

//     //start from the next index(because we already know the value of first index)
//     for( index = startIndex + 1; index < size; index++ ) {
//         //then we can compare the first index(indexOfMin) to the next index value, if next index value is less than the first index value, replace the next index into indexOfMin
//         if( data[ index ] < data[ indexOfMin ] )
//             indexOfMin = index;
//     }

//     return indexOfMin;
// }


/*
 * Function:   sort
 * Purpose:    Sort an array into ascending order.
 * Param:      data - an array to be sorted
 * Param:      size - the number of values stored in the array
 */
void sort( int data[], int size ) {
    int temp, indexOfMin, startIndex;
    
    for(startIndex = 0; startIndex<size; startIndex++){
        //find smallest number in an array
        indexOfMin = indexOfSmallest(data, size, startIndex);
        //swap numbers, smallest number in front
        temp = data[startIndex];
        data[startIndex] = data[indexOfMin];
        data[indexOfMin] = temp;
        //print sorted numbers to check
        printf("%d ", data[startIndex]);
    }
}




////correct answer************************************************************************
// int indexOfSmallest( int data[], int size, int startIndex );

// /*
//  * Function:   sort
//  * Purpose:    Sort an array into ascending order.
//  * Param:      data - an array to be sorted
//  * Param:      size - the number of values stored in the array
//  */
// void sort( int data[], int size ) {
//     int startIndex;
//     int indexOfMin;
//     int temp;

//     for( startIndex = 0; startIndex < size - 1; startIndex++ ) {
//         indexOfMin = indexOfSmallest( data, size, startIndex );
//         temp = data[ startIndex ];
//         data[ startIndex ] = data[ indexOfMin ];
//         data[ indexOfMin ] = temp;
//     }
// }
