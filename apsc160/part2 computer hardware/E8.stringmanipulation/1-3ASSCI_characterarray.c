/* how would you represent the word "hello" as an array given below >> char hello[] = {...} */
#include <stdio.h>
//#include <string.h>

int main(){
    //int size = 6;
    char hello[] = {104, 101, 108, 108, 111};
    for(int index = 0; index < 6; index++)
        printf("%c", hello[index]);

    printf("\n");

    char mysetery[] = {73, 32, 108, 111, 118, 101, 32,112, 114, 111, 103, 114, 97, 109, 109, 105, 103, 33};
    for(int index = 0; index < 18; index++)
        printf("%c", mysetery[index]);

    printf("\n");

    //Question. What does null character do in character array??
    char message[] = {'H', 'e', 'l', 'l', 'o', '\0', 'C', 'l', 'a', 'r', 'i', 'c', 'e', '\0'};
    printf("%s, world!\n", message);


    return 0;
}