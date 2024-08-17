#include <iostream>
using namespace std;
//ASCII table 65-90 are capital letter (A-Z)
//ASCII table 65-90 are lower case letter (a-z)
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