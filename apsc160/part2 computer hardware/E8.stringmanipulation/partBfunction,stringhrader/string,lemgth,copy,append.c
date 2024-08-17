#include <stdio.h>
#include <string.h> //can be used to determined the length of the string

int stringLength(char str[]);
void stringCopy(char dest[], char src[]);
void stringAppend(char dest[], char src[]);

int main(){
    char String[] = "hello";
    char String2[12];
    int result;

    //store the lenght of the string in result variable
    result = stringLength(String);
    printf("length of %s is %i", String, result);

    //copy String[] to String2[10] function
    stringCopy(String, String2);
    printf("\n%s ", String2);

    //appennd 2 strings and result in String2
    stringAppend(String, String2);
    printf("\n%s ", String2);
    
}


/* 
find the lenght of the string 
param : str[]-character array
*/
int stringLength(char str[]){
    //use strlen() to find the lenght of the string
    int lenght = strlen(str);

    return lenght;
}

/* 
copy the string from src to dest
param : src[]-original array
param : dest[]-copied array from src array
*/
void stringCopy(char dest[], char src[]){
    //copy string in src[] to dest[]
    strcpy(src, dest);
}


void stringAppend(char dest[], char src[]){
    //apend string src[] to dest[]
    strcat(src, dest);
}