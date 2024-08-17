#include <stdio.h>

int main(){
    char array1[] = "version1";
    char array2[9];

    int i;

    //copy element from array1 to arary2
    for(i = 0; i < 7; i++)
        array2[i] = array1[i];
    
    //fill in an array with 2 and then '\0' in index 7 and 8
    array2[i++] = '2';
    //array2[i++] = '\0';

    printf("%s\n", array2);
}