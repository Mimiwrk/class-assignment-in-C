//Mimi
//Write another C++ code segment which does the same task but uses only ONE for-loop
#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<100;i++){
        //if the remainder == 9, print the new line
        if(i%10==9){
            cout<<i<<endl;
        //else if number is less than 10, add 0 in front of the number
        }else if(i<10){
            cout<<"0"<<i<<"\t";
        //else just print the number
        }else{
            cout<<i<<"\t";
        }
    }
}