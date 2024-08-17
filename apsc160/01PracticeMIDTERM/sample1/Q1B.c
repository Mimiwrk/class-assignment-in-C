#include <stdio.h>

int main(void){
    int count = 0;
    int indexA = 0;
    int indexB;

    while(indexA < 4){
        indexB = 0;
        while(indexB < 5){
            count++;
            indexB++;
        }
    indexA++;
    }
    printf("%i", count);
}