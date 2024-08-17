#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size;           //control size of row and column
    int column, row;    //control row and column
    int num;            //print increasing number

    //prompt user to enter a positive integer for size 
    //printf("Enter a size for a triangle between 1 to 9 : ");
    scanf("%i", &size);

    if(size <= 0 || size > 9){
        printf("Error : please try again\n");
    }else{
        //outter loop control column if print a new line inside an outter loop
        for(column=1 ; column<=size ; column++){
            //decreasing loop
            for(row=column ; row<size ; row++){         //at frist row=1 and it increeases until now row=3, assume size = 4
                printf(".");
            }
            //initialize num here again to reset num's value
            num = 1;
            //increasing loop
            for(row=1 ; row<=column ; row++){           //print num after row=3
                printf("%i", num);
                num++;      
            }
        printf("\n");
        }
    }

return 0;
}