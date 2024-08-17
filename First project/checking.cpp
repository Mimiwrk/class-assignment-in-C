#include<iostream>
#include<string>    //for stoi(),to_string(),stod() function
using namespace std;
//equivalent string to integer
int stringToInteger(string &s){
    int n = stoi(s);
    return n;
}
//equivalent string type to decimal number
double stringToReal(string &s){
    double d = stod(s);
    return d;
}
//equivalent integer to string
string integerToString(int &i){
    string s = to_string(i);
    return s;
}
//equivalent decimal number to string type
string realToString(double &d){
    string s = to_string(d);
    return s;
}

int main(){
    int num;
    double deci;
    string str;

    //input
    cout << "Employee's age : ";
    cin >> num;     //integer type
    cout << "\nYear of work : ";
    cin >> str;     //string type
    cout << "\nHourly wage : ";
    cin >> deci;    //double type
        while(!(cin>>num)||!(cin>>deci)||!(cin>>deci)){
        cout << "incorrect input - try again";
        cin.clear();
        cin.ignore(100,'\n');
        }
    
    cout << "\nstring to integer : " << stringToInteger(str);
    cout << "\nstring to double : " << stringToReal(str);

    cout << "\ninteger to string : " << integerToString(num);
    cout << "\ndouble to string : " << realToString(deci);

}