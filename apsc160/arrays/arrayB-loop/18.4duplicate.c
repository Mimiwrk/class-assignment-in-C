
/*
 *  Function:  compare_arrays
 *  Purpose:   Compute the number of integers that are common to two arrays
 *             (i.e., that are found in both arrays).  Another way of saying 
 *             this is:  return the size of the intersection of two arrays.
 *
 *  Param:     array1  - first array
 *             size1   - size of first array
 *             array2  - second array
 *             size2   - size of second array
 *  Return:    the number of integers which are found in BOTH arrays
 */

#include <stdio.h>
#include <stdlib.h>

//function prototypes
int search( int array[ ], int size, int toFind );
int compare_arrays(int array1[ ], int size1, int array2[ ], int size2);

int main(void){
    int arrayA[] = { 3, 6, -1, 2, -4 };
    int arrayB[] = { -1, 9, -1, 2, 6, 8 };
    int num_found, find;

    //scanf("%i", &find);

    num_found = compare_arrays(arrayA, 5, arrayB, 6);

    printf("same value found in both array : %i\n", num_found);


return 0;
}


//search position of the index in an array(only the first one)
int search(int array[], int size, int toFind){
    //initialize location = -1 for an empty array(it'll return -1 if there's no number found)
    int location = -1;

    for(int index=0; index < size; index++){
        if(toFind == array[index]){
            return index;
        }  
    }
    return location;
} 

//function to compare numbers in two arrays
int compare_arrays( int array1[], int size1, int array2[], int size2 ) {
    int index;
    int num_found = 0;

    for(index=0; index < size1; index++){
        /* compare each index at a time in both array
         * search the same index in array 2 that match the value in an array1, 
         * i.e. -first, we are checking arra1[0]=3 and the search function will try to search throught all the index in an array2
                if 1 value is found it will return that position in search function. (now we have return one value, because search value will return only once)
                (num_found++; will increase OR do the work)
                -Then, we check arra1[1]=6 , if search functon doesn't found the same value in an arry2, 
                search funcion will return -1(num_found++; won't do the work)
         * if there is no number found(return -1 in search function), it'll return 0(in comapre function)*/
        if(search(array2, size2 ,array1[index]) != -1){
            //will increase when same number is found
            num_found++;
        }
    }

    return num_found;
}


/*
//try this without using search function
//this can be used only if there's the same number on in eaach array onces, it supposed to return 3 instead of 4
int compare_arrays( int array1[], int size1, int array2[], int size2 ) {
    int index1, index2;
    int num_found = 0;
    //use nested while loop to compare 2 array 
    for(index1=0; index1<size1; index1++){
        for(index2=0; index2<size2; index2++){
            if(array1[index1]==array2[index2]){
                num_found++;
            }
        }
    }
    return num_found;
}
*/




/* 
//this is the right answer in previous question, also include #defind NOT_FOUND = -1 on top of the code/////////////////////////////////////////////////////////////////////////////
int  search( int array[ ], int size, int toFind ) {
    int NOT_FOUND = -1;
    int index;
    
    for (index = 0; index < size; index++) {
        if ( array[ index ] == toFind )
            return index;
    }
    
    return NOT_FOUND;
    }
 */