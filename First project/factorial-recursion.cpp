// factorial using recursion
#include <iostream>
using namespace std;


//function
int factorial(int n){
    if(n==1 || n==0)                // if number=1 or 0, return 1 because 1!and0!=1
        return 1;           
    return n * factorial(n-1);      // else return the value n(n-1)
}

int main(){
    int n;
    cout<<"Enter any positive number : ";
    cin>>n;

    // result=factorial(n);            //store the value in a result variable
    cout<<n<<"! is "<<factorial(n);
}