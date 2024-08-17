#include <stdio.h>
#include <sddlib.h>

int main(){
    char message[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int size = sizeof(message);     //size = 6
    printf("%s", message);

    printf("\nsize of the array : %i", size2);

    printf("\nnumber conversion to assicode : ");
    for(int index = 0; index < size; index++){
        printf("%i ", message[index]);
    }


    return 0;
}