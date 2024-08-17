//convert upper to lower or lower to upper using function
#include <iostream>
#include<string>
using namespace std;
//ASCII table 65-90 are capital letter (A-Z)
//ASCII table 65-90 are lower case letter (a-z)

void toUpperCase(string &m){
    for(int i=0; i<=m.length(); i++){
        if(m[i] >= 97 && m[i] <= 122){       //if it a lower case
            m[i] -= 32;                      //convert to capital letter(b=98, B=66)
        }
    }
    cout << "Uppercase : " << m;
}

void toLowerCase(string &m){
    for(int i=0; i<=m.length(); i++){
        if(m[i] >= 65 && m[i] <= 90){       //if it a capital letter
            m[i] += 32;                     //convert to lower case(A=65, a=97)
        } 
    } 
    cout << "Lowercase : " << m;
}

int main() 
{ 
    string message;
    int i;
    cout << "Enter the message : " << message;
    getline(cin, message);                  //getline() function allow the input of the whole line to be converted

        if(message[i]<=90){
            toLowerCase(message);
        }
        else{
            toUpperCase(message);
        }

    return 0;

}
