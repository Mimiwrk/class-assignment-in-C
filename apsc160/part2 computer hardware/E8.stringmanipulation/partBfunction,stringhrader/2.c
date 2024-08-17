#include <stdio.h>

int main(){
    int mynum;
    char fileName[100];

    printf("Enter number : ");
    scanf("%d", &mynum);

    sprintf(fileName, "myfile-%d", mynum);
    printf("%s", fileName);
}


