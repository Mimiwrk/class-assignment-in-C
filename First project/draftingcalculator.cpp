
//calculator using function
#include<iostream>
using namespace std;

// 1.sum
int sumup(int n1, int n2) {
	return n1 + n2;
}

// 2.substraction
int subtract(int n1, int n2) {
	return n1 - n2;
}

// 3.multiplication
int multiply(int n1, int n2) {
	return n1 * n2;
}

// 4.division
int divide(int n1, int n2) {
	return n1 / n2;
}
//main function
int main() {
	int num1 = 98, num2 = 50;

    int sum = sumup(num1, num2);
    int result = subtract(num1, num2);
    int product = multiply(num1, num2);
    int quotient = divide(num1, num2);

	cout << "the sum of " << num1 << " + "<< num2 << "=" << sum;
    cout << "\nthe difference of " << num1 << " - "<< num2 << "="  << result;
    cout << "\nthe product of " << num1 << " * "<< num2 << "=" << product;
    cout << "\nthe quotient of " << num1 << " / "<< num2 << "=" << quotient;


	return 0;
}


//https://www.educative.io/edpresso/what-is-div-in-cpp
// 5.DIV(output quotion and remainder)
#include <cstdlib> //for div()
#include <iostream>
using namespace std;

void division(int x, int y){
    div_t hello = div(x,y);
      cout << "Quotient = " << hello.quot << endl;
    	cout << "Remainder = " << hello.rem;
}

int main() {
    int d1, d2;
    
    cout<<"Enter dividened and divisor: ";
    cin>>d1>>d2;
    
    division(d1,d2);
  return 0;
  }

// 6.remainder(REM)
#include <iostream>
using namespace std;

int remainder(int g, int h){
    return g % h;   //% is the modulus(or mod)
}

int main() {
    int d1, d2;
    
    cout<<"Enter dividened and divisor: ";
    cin>>d1>>d2;

    cout<<"Remainder = "<<remainder(d1,d2);
  return 0;
}

//7.exponent
#include <iostream>
using namespace std;

long int power(int b, int e) {
	long int ans;
    int i=1;
    if(e==0){       //if exponent=0 return 1;
        return i;
    }
    else{
        for(i;i<=e;i++){      //count until it reaches #exponent
            ans*=b;           //multiply the base e times
        }
    return ans;
    }
}
int main() {
	long int base, exponent;

	cout << "Enter the base and the exponent: ";
	cin >> base >> exponent;

	cout << base << " ^ " << exponent << " = " << power(base,exponent);
    return 0;
}

// 8.absolute value()
#include <iostream>
using namespace std;

int absolute(int a) {
	return abs(a);
}
int main() {
	int abso;
	cout << "Enter any numbers: ";
	cin >> abso;

	cout << "The absolute number is " << absolute(abso);
}

// 9.factorial using recursion
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0)                //if number=1or0, return 1 because 1!and0!=1
        return 1;           
    return n * factorial(n-1);      //else return the value n(n-1)
}

int main(){
    int n;
    cout<<"Enter any positive number : ";
    cin>>n;

    cout<<n<<"! is "<<factorial(n);
}
