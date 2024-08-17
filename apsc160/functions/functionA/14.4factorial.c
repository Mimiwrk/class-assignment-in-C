#include <stdio.h>

int factorial(int number);

int main(void){
    int num, fact;

    printf("Enter number : ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("\n%d! : %d", num, fact);
}

int factorial(int number){
    int factorial = 1;
    int count = 1;
    
    //1! is 1, 0! is 1
    if(number == 1 || number == 0)
        return 1;
    else{
    /*
    use for loop to control the count value and then calculate a factorail number
    count 1  * 2 * 3 * ... * number 
    */
        for(int count = 1; count<=number; count++)
            factorial *= count;
        // while(count<=number){
        //     factorial *=count;
        //     count++;
        // }
    }
        return factorial;
}




//Answer key
/*
 * Purpose:     Compute the factorial of the number
 * Parameter:   n - the number whose factorial we want to compute
 * Returns:     The factorial of n (n!)
 * Note:        If n > 12, then we will get arithmetic overflow!
 */
/*
int factorial(int n)
{
    int product = 1;
    while (n > 1)
    {
        product *= n;
        n--;
    }

    return product;
}
*/