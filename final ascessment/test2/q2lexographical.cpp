//Mimi
//lexicographical
#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;

int FindAddress(string array[], string word){
    int position;
    for(int i=0; i<MAX; i++){
        if(array[i]==word)
            position = i;
    }
    return position;
}

int main(){
    string LexWOrdList[MAX] = {"Aardvark", "Dinosaur", "Helix", "Longer", "Stand", "Yellow", "about", "ace", "gourd", "kite", "treble"};
    string newWord;
    int i, n, index;
/*
    //original array
    cout << "Original : ";
    for(i=0; i<MAX; i++){
        cout << LexWOrdList[i] << " ";
    }
    cout << endl;
*/


    index = 0;  //want to insert at index 0
    newWord = "3rd";
    //shifting strings from index 0 in an array 1 value forward
    for(i=MAX; i>index; i--){
        LexWOrdList[i] = LexWOrdList[i-1];
    }
    LexWOrdList[index] = newWord;  //put "3rd" into index zero
    cout << "The new word 3rd will be inserted in location " << FindAddress(LexWOrdList, newWord) << endl;


    index = 10;
    newWord = "scallion";
    //shifting strings from index 10 in an array 1 value forward
    for(n=MAX; n>index; n--){
        LexWOrdList[n] = LexWOrdList[n-1];
    }
    LexWOrdList[index] = newWord;   //put "scallion" into index ten
    cout << "The new word scallion will be inserted in location " << FindAddress(LexWOrdList, newWord) << endl;
/*
    //new array
    cout << endl << "New : ";
    for(i=0; i<MAX; i++){
        cout << LexWOrdList[i] << " ";
    }
*/

    return 0;
}