//Mimi
//pattern using nested for loop
#include<iostream>
using namespace std;

int main(){
    int s  = 4;
    int i, j;

    for(i=1;i<=s;i++){
        for(j=1;j<=s;j++){
            if(i==j)
                cout << j+i << "  ";
            else
                cout << "-  ";
        }
    cout << endl;
    }
    return 0;
}