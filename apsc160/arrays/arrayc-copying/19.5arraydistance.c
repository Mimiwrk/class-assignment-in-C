#include <stdio.h>
#include <stdlib.h> /* for abs function */

//function prototypes
int distance( int dataA[], int sizeA, int dataB[], int sizeB );

int main(void){
    int arr1[] = { 3, 4, 1 };
    int size1 = 3;
    int arr2[] = { 7, 9, 6, -3};
    int size2 = 4;

    printf("smallest distance : %d", distance(arr1, size1, arr2, size2));

    return 0;
}
/*
 * Function:  distance
 * Purpose:   Compute the distance between two arrays.
 * Param:     dataA, dataB:  the two arrays
 * Param:     sizeA, sizeB:  the size of dataA and dataB, respectively
 * Returns:   the distance between the two arrays
 */
int distance( int dataA[], int sizeA, int dataB[], int sizeB ) {
    int distance;
    int min_distance = abs(dataA[0]-dataB[0]);

    for(int indexA = 0; indexA < sizeA; indexA++){
        int A = dataA[indexA];
        for(int indexB = 0; indexB < sizeB; indexB++){
            int B = dataB[indexB];
            distance = abs(A - B);
            //min_distance = 0;
            if(distance < min_distance){
                min_distance = distance;
            }
        }
    }
    //return the smallest distance between 2 array
    return abs(min_distance);
}


/*
//return maximum value
int distance( int dataA[], int sizeA, int dataB[], int sizeB ) {
    int indexA, indexB;
    int distance;
    int max_distance = 0;

    for(indexA = 0; indexA < sizeA; indexA++){
        for(indexB = 0; indexB < sizeB; indexB++){
            distance = (abs(dataA[indexA]) - abs(dataB[indexB]));
            if(distance < max_distance){
                max_distance = distance;
            }
        }
    }
    //return the smallest distance between 2 array
    return abs(max_distance);
}
*/


// //correct answer***************************************************************************** 
// #include <stdlib.h>

// /*
//  * Function:  numToArrayDistance 
//  * Purpose:   Compute the smallest distance from a number to an array --
//  *            defined to be smallest difference in absolute value
//  *            between num and the entries in the given array.
//  * Param:     num  - the number for which we'll be computing the distance
//  * Param:     data - an array
//  * Param:     size - the number of values stored in the array
//  * Returns:   the smallest distance from num to the data in the array
//  */
// int numToArrayDistance( int num, int data[], int size ) {
//     int smallestDistance = abs( num - data[ 0 ] );
//     int nextDistance;
//     int index;
    
//     for( index = 1; index < size; index++ ) {
//         nextDistance = abs( num - data[ index ] );
//         if( nextDistance < smallestDistance )
//             smallestDistance = nextDistance;
//     }
    
//     return smallestDistance;
// }

// /*
//  * Function:  arrayToArrayDistance
//  * Purpose:   Compute the distance between two arrays.
//  * Param:     dataA, dataB:  the two arrays
//  * Param:     sizeA, sizeB:  the size of dataA and dataB, respectively
//  * Returns:   the distance between the two arrays
//  */
// int distance( int dataA[], int sizeA, int dataB[], int sizeB ) {
//     int smallestDistance = abs( dataA[ 0 ] - dataB[ 0 ] );
//     int nextDistance;
//     int indexA;
    
//     for( indexA = 0; indexA < sizeA; indexA++ ) {
//         nextDistance = numToArrayDistance( dataA[ indexA ], dataB, sizeB );
//         if( nextDistance < smallestDistance )
//             smallestDistance = nextDistance;
//     }
    
//     return smallestDistance;
// }
