#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int MAX = 100;

int main(){
    int data_num = 0;
    int m;  //column
    int Pdata[m][MAX]; //main dimentional array

    ifstream infile;    //read mode
    //open the file
    infile.open("data.txt");
    //if the file can't be opened
        if(!infile){
            cout << "Error. Couldn't open the file" << endl;
        return 1;
        }
        cout << "file open : " << endl;
    
    //read the file
        for(int i=0; i<m; i++){
            for(int j=0; j<=MAX; j++){
                infile >> Pdata[i][j];
            }
        cout << endl;
        }
        //infile.close();

    //print all elements on the screen to check
        for(int i=0; i<m; i++){
            for(int j=0; j<=MAX; j++){
                cout << Pdata[i][j] << endl;
            }
        cout << endl;
        } 

return 0;
}