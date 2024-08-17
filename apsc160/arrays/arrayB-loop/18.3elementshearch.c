/*
 *  Function:  search
 *  Purpose:   Compute the first index location of the target integer
 *             within an array, when searching from left to right.
 *  Param:     array  - input array of integers
 *             size   - size of input array
 *             toFind - target integer to find
 *  Return:    index location of the first found target;  but,
 *             return -1 if the target was not found in the array
 */


#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

//function prototype
int search(int array[ ], int size, int toFind);

int main(void){
    int array[] = {323, 323, 411, 544};
    int num_location, find;

    scanf("%i", &find);

    num_location = search(array, SIZE, find);

    printf("index location : %i\n", num_location);


return 0;
}

int search(int array[], int size, int toFind){
    int location = -1;
    /*int count = 0;*/

    for(int index=0; index < size; index++){
        if(toFind == array[index]){
            location = index;
            //stop the prgram, like switch loop
            break;
        //count how many time we find the number, change return location; to return count;
        /*count++;*/
        }                                                                                                                                                                     
        // if(count == 0){
        //     location = -1;
        // }
    }

    return location;
}









/*
//jasmine's code
int index;
int location = -1;
int count = 0;

    for(int index=0; index < size; index++){
        //only want to print first number that is found in that index
        if(array[index] == toFind && count < 1){
            location = index;
        count++;
        }   

*/


/* 
int search(int array[], int size, int toFind){
    int location = -1;

    for(int index=0; index < size; index++){
        if(toFind == array[index]){
            location = index;
            //stop the prgram, like switch loop
            break;
        }  
    }
    return location;
} 
*/


/* 
//this is the right answer///////////////////////////////////////////////////////////////////////////////////////////
#defind NOT_FOUND = -1

int main(void){
    /////////////
}

int  search( int array[ ], int size, int toFind ) {
    int index;
    
    for (index = 0; index < size; index++) {
        if ( array[ index ] == toFind )
            return index;
    }
    
    return NOT_FOUND;
    }
 */