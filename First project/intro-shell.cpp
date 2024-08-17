// MY NAME IS: Wirakarn Ngamchaianan(Mimi)
// first C++ program
#include <iostream>
#include<cmath>	//use for math method
#include<iomanip>   //format a decimal numbers,can be used with setprecision(n)
#include<climits>	//work with max and min limits of the data types
using namespace std;
int main() {
 
   // exercise 1, a brief statement
   /*  Create a sequence of C++ code to print out a hello, world! statement to the screen.
      Include the iostream library to get the commands cout and cin to work.
      Include a command at the end to make the program wait until a key is pressed.
      Display a line of space before starting the next exercise.
   */
   cout<<"Hello world!"<<endl;
   cout<<"Press Enter to continue...";
   cin.get();      //system("pause"); is used in windowOS only
   cout<<"_________________________________________________"<<endl;
 
 
   // exercise 2, adding two numbers, stage 1
   /* Create a sequence of C++ code to display the sum of two chosen integer numbers.
	  Include a command to make the program wait until a key is pressed.
   */
int num1, num2, sum;
num1=20;
num2=30;
sum=num1+num2;
cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
cin.get();
cout<<"_________________________________________________"<<endl;
 
 
   // exercise 3, adding two numbers using variables, stage 2
   /* Create a sequence of C++ code to create two new variables, each to be initialized to an integer.
	  Display the sum of the two variables.
	  Include a command to make the program wait until a key is pressed.
   */
cout<<"Enter two integer numbers: "<<endl;
cin>>num1>>num2;
 
sum = num1+num2;
cout<<"the sum is: "<<sum<<endl;
   
cin.get();
cout<<"_________________________________________________"<<endl;
 
   
 
   // exercise 4, adding two integer numbers using keyboard input, stage 3
   /* Create a sequence of C++ code to create two new variables, both initialized to 0.
	  Prompt the user to enter a value for each integer, one-by-one.
	  Display a sentence on the sum of the two variables.
	  Include a command to make the program wait until a key is pressed.
   */
int num3=0;
int num4=0;
cout<<"Enter the first number: "<<endl;
cin>>num3;
cout<<"Enter the second number: "<<endl;
cin>>num4;
sum=num3+num4;
cout<<"The sum is: "<<sum<<endl;
 
cin.get();
cout<<"_________________________________________________"<<endl;   
 
 
   //exercise 5, introduction to the char data type
   /* Create a sequence of C++ code to create a new variable of type char,
	  initialized to a character of your choice.
	  Display a sentence which shows the ASCII code of your char variable.
 
	  Now go in the opposite direction:
	  Get an integer between 32 and 124 via user input from the keyboard.
	  Write C++ code to display the character associated with the entered integer.
	  Include a command to make the program wait until a key is pressed.
   */
cout<<"The ASCII value of a is "<<int('a')<<endl;  //"int('a') and (int)'a'is the same"
cout<<"The ASCII value of b is "<<(int)'b'<<endl;  //it converts from int to char
 
int num7;
cout<<"Enter the integer between 32 and 124: ";
cin>>num7;
cout<<"The ASCII code of "<<num7<<" is "<<(char)num7<<endl;
 
 
cout<<"_________________________________________________"<<endl;   
 
 
   // exercise 6, swapping two numbers
   /* Create a sequence of C++ code to declare and initialize two variables of type integer.
	  Display a sentence stating the value of the two numbers.
	  Swap the values of the two variables.
	  Display a sentence stating the swapped values of the two variables.
	  Include a command to make the program wait until a key is pressed.
   */
int num5, num6;
num5=10;
num6=15;
cout<<"The first and the second number is "<<num5<<" and "<<num6<<" orderly"<<endl;
 
//swaping num5 and num6;
num5=num6;
num6=num5;
cout<<"After swaping, the first number is "<<num5<<" and the second number is "<<num6<<endl;
 
cin.get();
cout<<"_________________________________________________"<<endl;
 
 
   //exercise 7, the volume of a sphere
   /* Create a sequence of C++ code to calculate the volume of a sphere,
	  given the radius from user input.  The radius variable is of type double.
	  Create a variable of type double for the volume.
	  Define the constant pi using the cmath library.
	  Display a sentence for the volume.
	  Use the iomanip library to display the volume answer to two decimal places.
	  Include a command to make the program wait until a key is pressed.
   */
double radius, volume;   
cout.precision(2);  //set the output to be 2decimal place, and use fixed later on instead of writing precision(2)
cout<<"Enter the radious of sphere: ";
cin>>radius;
 
volume=4/3*M_PI*pow(radius,3);   //M_PI is a constant value of pi which is 3.1416
cout<<"The volume of sphere is: "<<fixed<<volume<<endl;
 
cin.get();
cout<<"_________________________________________________"<<endl; 
 
   
 
 
   //exercise 8, Heron's Formula for the area of a triangle
   /* Create a sequence of C++ code to calculate the area of a triangle using Heron's formula.
	  Declare all variables to be of type double.
	  Define the constant pi using the cmath library.
	  Display a sentence for the area.  Display the three sides and the area answer to one decimal place.
	  Include a command to make the program wait until a key is pressed.
   */
 
double a,b,c,s,area;
a=1.253;
b=3.87;
c=4.345;
cout.precision(1);      //output to 1decimal place
s=(a+b+c)/2;     //semi-perimeter
area = sqrt(s*(s-a)*(s-b)*(s-c));    //Heron's Formula
cout<<"Three sides of the triangle is "<<fixed<<a<<", "<<b<<", "<<c<<"\nThe area of the triangle is "<<fixed<<area;
 
cin.get();
cout<<"_________________________________________________"<<endl; 
   
 
 
   //exercise 9, introduction to the boolean type
   /* Create a sequence of C++ code to determine if a quadratic equation is solvable.
	  Recall that a quadratic is solvable when the discriminant is bigger or equal to zero.
	  Declare a variable of type bool for the discriminant.
	  Display a sentence for the answer:  Either:
      The quadratic is solvable: 1.  which means yes
      The quadratic is solvable: 0   which means no
	  Include a command to make the program wait until a key is pressed.
   */
bool discriminant;      //discriminant=sqrt(pow(b,2)-(4*a*c))
int number;
cout<<"Enter the discriminant number: ";
cin>>number;
if(number==0||number>0){
    discriminant=true;      //it'll return 1
}
else{discriminant=false;}
cout<<"The quadratic is solvable: "<<discriminant<<endl;      //it'll return 0
cin.get();
cout<<"_________________________________________________"<<endl; 
   
 
   // exercise 10, the upper and lower limits of integer based data types
   /* Use the limits library to create a sequence of C++ code to display
	  the largest and the smallest values for each data type listed below:
	  - short
	  - unsigned short
	  - integer
	  - unsigned integer
	  - long
	  - unsigned long
	  - long long
	  - unsigned long long
	  - char
	  - signed char
	  Include a command to make the program wait until a key is pressed.
   */
//need #include<climits>
//These are intregal data types, unsigned is positive value only
//short(8bits) <= int(16bits) <= long(32bits) <=long long(64bits)

//short
cout<<"\nThe maximum limit of short data type: "<<SHRT_MAX;
cout<<"\nThe minimum limit of short data type: "<<SHRT_MIN;
//unsigned short
cout<<"\nThe maximum limit of unsigned short data type: "<<USHRT_MAX;
//cout<<"\nThe minimum limit of unsigned short data type: "<<USHRT_MIN;
//integer
cout<<"\nThe maximum limit of integer data type: "<<INT_MAX;
cout<<"\nThe minimum limit of integer data type: "<<INT_MIN;
//unsigned integer
cout<<"\nThe maximum limit of unsigned integer data type: "<<UINT_MAX;
//cout<<"\nThe minimum limit of unsigned integer data type: "<<UINT_MIN;
//long
cout<<"\nThe maximum limit of long data type: "<<LONG_MAX;
cout<<"\nThe minimum limit of long data type: "<<LONG_MIN;
//unsigned long
cout<<"\nThe maximum limit of unsigned long data type: "<<ULONG_MAX;
//cout<<"\nThe minimum limit of unsigned long data type: "<<ULONG_MIN;
//long long
cout<<"\nThe maximum limit of long long data type: "<<LLONG_MAX;
cout<<"\nThe minimum limit of long long data type: "<<LLONG_MIN;
//unsigned long long
cout<<"\nThe maximum limit of unsigned long long data type: "<<ULLONG_MAX;
//cout<<"\nThe minimum limit of unsigned long long data type: "<<ULLONG_MIN;
//char
cout<<"\nThe maximum limit of char data type: "<<CHAR_MAX;
cout<<"\nThe minimum limit of char data type: "<<CHAR_MIN;
//signed char
cout<<"\nThe maximum limit of signed char data type: "<<SCHAR_MAX;
cout<<"\nThe minimum limit of signed char data type: "<<SCHAR_MIN;

//the minimun limits of unsigned short,unsigned integer,unsigned long,unsigned long long don't work


cin.get();
cout<<"_________________________________________________"<<endl; 
}
	