/*
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double a = 2.658989295731909;
     double b = -3.1367106283099107;
    
    printf("%lf\n", a);
    printf("%lf\n", b);	
    printf("%.3lf\n", a);
    printf("%.5lf\n", b);
    printf("%6.2lf\n", a);
    printf("%7.1lf\n", b);	
    printf("%-6.1lf%4.1lf\n", a, b);	
    printf("%-7.1lf%+5.1lf\n", b, a);	

    return 0;
}