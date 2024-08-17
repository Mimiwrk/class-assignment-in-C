//error

#include<iostream>
#include<string>
using namespace std;
//use .find  to find index of new word

const int MAX = 100;

//string = temp;
//takes the array and new word int its parameter list and (returns the index in the array) of where the new word should be inserted
void FindAddress(string n[MAX]){
    for(int i=0; i<MAX; i++){
        if(n[i]=="3rd"){
            cout << "Index of 3rd : " << i << endl;
        }
    }
    for(int j=0; j<MAX; j++){
        if(n[j]=="scallion"){
        cout << "Index of scallion : " << j;
        }
    }
}

int main(){
    string LexWordList[MAX] = {"Aardvark", "Dinosaur", "Helix", "Longer", "Stand", "Yellow", "about", "ace", "gourd", "kite", "treble"};
    string newWord = "scallion";
    string Secondw = "3rd";
    string temp;
    int n = 10; //empty array
    // int i;
    cout << "Original array : ";
    for(int o=0; o<MAX; o++){
        cout << LexWordList[o] << " ";
    }
    cout << endl;

    //put new word in an array
    n++;
    LexWordList[n] = newWord;

    n++;
    LexWordList[n] = Secondw;

    cout << "New array : ";
    for(int n=0; n<MAX; n++){
        cout << LexWordList[n] << " ";
    }
    cout << endl;

    //sorted in lexicographical order
    for(int i=0; i<MAX-1; i++){
        for(int j=0; j<MAX-i; j++){
            if(LexWordList[j+1]<LexWordList[j]){
                temp = LexWordList[j];
                LexWordList[j] = LexWordList[j+1];
                LexWordList[j+1] = temp;
            }
        }
    }

    cout << "Lexicographical order : ";
    for(int i=0; i<MAX; ++i){
        cout << LexWordList[i] << " ";
    }
    cout << endl;


    //call findaddress function
    FindAddress(LexWordList);

    cin.get();      //return 0; is for online compiler, this one is the same as system("pause")  but for MACOS
}