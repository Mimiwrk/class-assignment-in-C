#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int num;
    int count = 0; //count how may int
    string line;
//open the file
    ifstream infile;
    infile.open("data.txt");
    if(!infile)
    {
        cout << "Error. Couldn't open the file" << endl;
        return 1;
    } 
    cout << "File opened." << endl;

//read one num at a time
    infile >> num;
    //return ture when it reach the end of the file, return false if it doesn't
    while(!infile.eof())
    {
        count++;
        //cout << setw(5) << num;
        //print each line to the file
        if(infile.is_open()){
            while(getline(infile, line)){
                infile >> line;  //print all numbers infile
            }
        }
    }
    infile.seekg(0, ios::beg); //reset file to beginging


    infile.close();
    cout << endl;
    return 0;
}