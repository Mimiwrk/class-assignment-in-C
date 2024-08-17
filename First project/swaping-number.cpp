//swaping two numbers
#include <iostream>
using namespace std;
//swap function
void swap (int &n1 , int &n2) {     //a reference(&) is used to get address of variable? or used for an alias name
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
int main() {
    int num1 = 7 ;
    int num2 = 102; 
    cout << "num1 is: " << num1 << " and " << "num2 is: " << num2 <<endl ;
    swap (num1 ,num2);      //call the swap function above
    cout << "num1 is: " << num1 << " and " << "num2 is: " << num2 <<endl ;
    return 0;
}