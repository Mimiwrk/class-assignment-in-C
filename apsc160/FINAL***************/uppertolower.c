/* convert uppercase to lowercase
convert lowercase to uppercase */
#include <stdio.h>
#include <string.h>
//ASCII table 65-90 are capital letter (A-Z)
//ASCII table 97-122 are lower case letter (a-z)

void toLowerCase(char str[]);
void toUpperCase(char str[]);

int main(){
    char array1[] = "HELLO";
    char array2[] = "world";

    toLowerCase(array1);
    toUpperCase(array2);

    printf("lowercase : %s", array1);
    printf("\nuppercase : %s", array2);


    return 0;
}

//convert uppercase to lowercase
void toLowerCase(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        if(str[count] >= 65 && str[count] <= 90)
            str[count] += 32;
        count++;
    }
}

//convert lowercase to uppercase
void toUpperCase(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        if(str[count] >= 97 && str[count] <= 122)
            str[count] -= 32;
        count++;
    }
}




/* C++
#include <iostream>
using namespace std;
//ASCII table 65-90 are capital letter (A-Z)
//ASCII table 97-122 are lower case letter (a-z)
int main() 
{ 
    string message;
    cout << "Enter the message : " << message;
    getline(cin, message);        //getline() function allow the input of the whole line to be converted
    int size = message.length();

    int i;  //counter of the character
    for(i=0; i<=size; i++){
        if(message[i] >= 65 && message[i] <= 90){       //if it a capital letter
            message[i] += 32;                           //convert to lower case(A=65, a=97)
        }
        else if(message[i] >= 97&& message[i] <= 122){  //if it a lower case
            message[i] -= 32;                           //convert to capital letter(b=98, B=66)
        }
    }
    
    cout << endl << "Converted letters : " << message;
    return 0;
} 
*/