#include<iostream>
using namespace std;

int main(){
    double monthArray[6];

    double total = 0;
    for(int i=0; i<=5; i++){
        cout << "Enter the amount for month " << i+1 << " : ";
        cin >> monthArray[i];
        total += monthArray[i];
    }

    double average = total/6;
    double inTwoyears = average * 24;

    cout << "Total : " << total << endl;
    cout << "Average : " << average << endl;
    cout << "inTwoyears : " << inTwoyears << endl;

    cin.get();  //same as system(pause>0); but this one is for windows only
}  