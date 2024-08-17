#include<iostream>
#include<string>
#include<fstream>
using namespace std;
const int MAX = 10;


int main(){
    int num = 0; //num in file, count how may int
    int data_num = 0;
    int address = 0;
    int data[MAX];  //array of pareto numbers
    fstream infile; //fstream is read and write

    infile.open("data.txt");
    infile >> data_num;

//read until it reaches the end of the file
        while (data_num >= 0) {     //if data_num is positive
            //put the data number into the array for sorting purposes(only one line)
            data[address] = data_num;
            address++;
            infile >> data_num;     //store it in data_num
        }
    for (int i = 0 ; i< MAX ; i++)
        cout << data[i]  << " ";
        

    /*
    if(!infile)
    {
        cout << "Error. Couldn't open the file" << endl;
        return 0;
    }
    else{
        cout << "File opened." << endl;

        int line;
        cout >> line;   //read from the file

        cout << line << endl;
        infile.close();
    }
*/

    ////////////////////output data in another text file///////////////////////
    // infile.open("pareto.txt", ios::out);    //write mode
    // if(infile.is_open()){
    //     cout << infile.open("data.txt");
    //     infile.close();
    // }
    // infile.close();


    cin.get();
}