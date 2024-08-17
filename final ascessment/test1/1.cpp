#include <iostream>
#include<string>
using namespace std;

int main() {

    string quote = "The quick brown fox jumped over the lazy dog.";
    string location; 
    
    location = quote.find("jump"); 

    cout << location;
}