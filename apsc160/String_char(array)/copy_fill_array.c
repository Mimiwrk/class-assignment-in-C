/* purpose : copy an array and fill in the next element in the new array */
#include <stdio.h>

int main(){
    int i;
    char array1[] = "version1";
    char array2[9];

    //copy part of array1 to array2
    for(i = 0; i < 7; i++){
        array2[i] = array1[i];
    }

    //fill the rest of the array2
    array2[i++] = '2';
    array2[i++] = '\0';     //NULL character

    //print the new array
    for(i = 0; i < 9; i++)
        printf("%c", array2[i]);


    return 0;
}