//https://www.programiz.com/c-programming/examples/ASCII-value-character

//
#include <stdio.h>
//input a number and output actual number(%d) and a character contained in ascii(%c)
int main() {  
    
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %d = %c", c, c);
    
    return 0;
}


////input a character and output the actual character(%c) and a number contained in ascii(%d)
// #include <stdio.h>
// int main() {  
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);  
    
//     // %d displays the integer value of a character
//     // %c displays the actual character
//     printf("ASCII value of %c = %d", c, c);
    
//     return 0;
// }

