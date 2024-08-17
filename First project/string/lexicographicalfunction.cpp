//lexicographical order string(alphabetical order)
//using function

#include<iostream>
#include<string>
using namespace std;
void order(string str[5]){
    string temp;
    //arrange words, comparing index characters
    for(int i=0; i<4; i++){         //start from word index0
        for(int j=0; j<3-i; j++){   //compare word insde index 0 to last index
            //switch the word if j is more than the word after
            if(str[j] > str[j+1]){
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

int main(){
    string temp;
    string str[5] = {"lastweek", "was", "Adale's", "34th", "birthday"};

    cout << "Original words : ";
    for(int i=0; i<=5; i++){
        cout << str[i] << " ";
    }

    order(str);

    cout << "\nIn lexicographical order : ";
    //print the words in lexicographical order
    for(int i=0; i<=5; i++){
        cout << str[i] << " ";
    }
}
