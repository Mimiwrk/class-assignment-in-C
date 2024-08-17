//lexicographical order string(alphabetical order)

#include<iostream>
#include<string>
using namespace std;

int main(){
    int i, j;      //counter
    string temp;
    string str[5] = {"lastweek", "was", "Adale's", "34th", "birthday"};

    cout << "Original words : ";
    for(int i=0; i<=5; i++){
        cout << str[i] << " ";
    }
    //arrange words, comparing index characters
    for(i=0; i<4; i++){         //start from word index0
        for(j=0; j<3-i; j++){   //compare word insde index 0 to last index
            //switch the word if j is more than the word after
            if(str[j] > str[j+1]){
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    cout << "\nIn lexicographical order : ";
    //print the words in lexicographical order
    for(int i=0; i<=5; i++){
        cout << str[i] << " ";
    }
}
