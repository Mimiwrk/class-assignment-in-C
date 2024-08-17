#include <stdio.h>

#define KG_POUND 2.2
#define KM_MILE 1.6

int main(){
    double num;
    int option;

    printf("1)km to mile\n2)mile to km\n3)kg to pound\n4)pount to kg\nEnter the potion you want to convert : ");
    scanf("%i", &option);

    if(option != 1 && option != 2 && option != 3 && option != 4){
        printf("Error");
        return 0;
    }

    printf("\nEnter the number : ");
    scanf("%lf", &num);

    if(option == 1){
        num /= KM_MILE;
    }else if(option == 2){
        num *= KM_MILE;
    }else if(option == 3){
        num *= KG_POUND;
    }else{
        num /= KG_POUND;
    }

    printf("Final conversion : %.2lf", num);

    return 0;
}