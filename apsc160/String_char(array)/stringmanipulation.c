#include <stdio.h>
#include <string.h> ///////////////////////////////////////IMPORTANT///////////////////////////////////////

//function prototypes
int stringLength(char str[]);
void strignCopy(char dest[] ,char src[]);
void stringAppend(char dest[], char src[]);


int main(){
    
    char array1[20] = {'h', 'e', 'l', 'l', 'o', '\0'};        //string source array
    //char array1[] = "hello";
    char array2[6];                                         //destination array

    char array3[] = {' ', 'w', 'o', 'r', 'l', 'd', '\0'};

//////////////////////////////////* copy to another string *///////////////////////////////////////////
    strcpy(array2,array1);
    //printf("%s", array2);

    printf("Copy array : ");
    for(int i=0; i<5; i++){
        printf("%c", array2[i]);
    }



//////////////////////////////////* string length *///////////////////////////////////////////////////
    int length = sizeof(array1);
    int length_nonull = strlen(array1);
    printf("\nLength array : %i", length);
    printf("\nLength array exclude NULL : %i", length_nonull);





//////////////////////////////////* append string *///////////////////////////////////////////////////
    strcat(array1, array3);
    printf("\nAppend array : ");
    for(int i=0; i<sizeof(array1); i++){
        printf("%c", array1[i]);
    }


    return 0;
}