//reverse string(Mr.Loveday method)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "Last week was Adela's 34th Birthday";
    cout << sentence << endl;
    
    int sentence_size = sentence.length();      //identify the size of the string including spacebar
    
    for(int i = sentence_size; i >= 0 ; i--)    //i=size of the string, decrease to the first character(index 0)
        sentence += sentence[i];
    
    cout << sentence.substr(sentence_size = 1, sentence_size);  //.substr(position of the character substring will start, number of character to include)
    return 0;
}




//reverse string using built-in reverse function
#include <iostream>
#include <bits/stdc++.h>    //for reverse function to work
using namespace std;

int main()
{
    string sentence = "Last week was Adela's 34th Birthday";
    cout << sentence << endl;
    
    reverse(sentence.begin(), sentence.end());
    cout << sentence;
    return 0;
}




//simple reverse string
#include <iostream>
using namespace std;

int main()
{
    string message;
    string reverse;
    
    cout << "Enter the message : ";
    getline(cin,message);
    
    int size = message.size();
    int i;  //counter of the index character
    
    for(i=size-1; i>=0; i--){     //print from the last index character(size-1) to the first index character(0)
        reverse += message[i];
    }

    cout << "Reverse string : " << reverse;
    
    return 0;
}