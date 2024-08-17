 #include <stdio.h>

int main(void){
    int i = 1, sum = 0;

    while(1){   //in the worksheet >> 1 = TRUE
        sum += i;
        if(i==3){
            //stop the loop
            break;
        }
        i++;
    }
    printf("i=%d, sum=%d\n", i, sum);
}


//output is i=3, sum=6