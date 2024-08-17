#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const int MAX = 10; //max value of an array

void sortArray(int Pdata[]){
    int i, high;
    //sorting from highest integer to lowest
    for(i=0; i< 10;i++){
        int high = i;    //first num is high
        for(int j=i+1; j < MAX; j++){     //checking with the next num
            if(Pdata[high] < Pdata[j]){       //if it less than the next num, next num is high
                high = j;
            }
        }
    }
    //swapping integers
    int temp;
    temp = Pdata[high];
    Pdata[high] = Pdata[i];
    Pdata[i] = temp;
}  

int main(){
    //int num = 0; //num in file,read through each integer
    int data_num = 0;   //read through each integer
    int address = 0;    //new array start from index 0
    int data[MAX];  //array of one line numbers
    int data2[MAX];
    ifstream infile; //fstream is read and write
    //fstream outfile;  //wirte into pareto.txt

    infile.open("data.txt");
    //if file can't be open
    if(!infile)
    {
        cout << "Error. Couldn't open the file" << endl;
        cin.get();
    } 
    cout << "File opened : " << endl;

    infile >> data_num;     //store data in a file into data_num
//read until it reaches the end of the file
        while (data_num >= 0) {     //if data_num is positive
            //put the data number into the array for sorting purposes(only one line)
            data[address] = data_num;
            address++;
            infile >> data_num;     //store it in data_num
        }
        sortArray(data[address]);


        
    // array of first line is data[i]
    for (int i = 0 ; i< MAX ; i++)
        cout << data[i]  << " ";
    cout << endl;
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