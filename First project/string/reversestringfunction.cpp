//reverse string using function
#include <iostream>
using namespace std;

void reverseString(string &m, string &r){

    //i = counter of the index character
    for(int i=m.size()-1; i>=0; i--){     //print from the last index character(size-1) to the first index character(0)
        r += m[i];                        //reverse string is reverse + character of decreasing index
    }

    cout << "Reverse string : " << r;
}

int main()
{
    string message;
    string reverse;
    
    cout << "Enter the message : ";
    getline(cin,message);

    reverseString(message, reverse);
    
    return 0;
}