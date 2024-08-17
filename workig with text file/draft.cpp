#include<iostream>
#include<fstream>   //read annd write to files
#include<iomanip>
#include<string>
#include<vector>    //similar to an arrray
using namespace std;
//https://www.delftstack.com/howto/cpp/read-int-from-file-cpp/
// void PutInArray(){

// }
// void SortArray(ifstram&, int){

// }
// void PChart(){

// }

int main(){
    int num = 0; //num in file, count how may int
    const int LENGTH=10;  //the max size of an array is 10 numbers
    int Pdata[LENGTH];    //array of pareto chart
    int i=0, x, max, temp, array;    //for puting in an array function, sorting numbers function, i is the same as count
//open the file/ read textnfile
    ifstream infile;
    infile.open("data.txt");
    if(!infile)
    {
        cout << "Error. Couldn't open the file" << endl;
        return 1;
    } 
    cout << "File opened." << endl;

//read one num at a time
    //return ture when it reach the end of the file, return false if it doesn't
    //while(!infile.eof()){
    //////////////////// putting numbers in each line into an array//////////////////////////////////////
        while (num >= 0) {  //while num is positive
            infile >> num;  //need to be within while loop or else it'll print only first num
            if(num >= 0){
            Pdata[i] = num;     //store num in an array, i = index number
            i++;       //count++;
            }
        }
/*
        for (int j = 0 ; j < LENGTH ; j++)
            cout << "array element " << j << " is " << Pdata[j] << " ";
        cin.get();
*/
    //////////////////// sortting an array /////////////////////////////////////////////////////////////
    for(i=0; i<10;i++){
        int max = i;    //first num is max
        for(int j=i+1; j < LENGTH; j++){     //checking with the next num
            if(Pdata[max] < Pdata[j]){       //if it less than the next num, next num is max
                max = j;
            }
        }
    /////////////////// swapping number(max come first) /////////////////////////////////////////////////
        temp = Pdata[max];
        Pdata[max] = Pdata[i];
        Pdata[i] = temp;

    /////////////////// out put the sorted array in paretochart //////////////////////////////////////////
        for(x=0;x<Pdata[i];x++){
            cout << "*";
        }
        cout << Pdata[i]<< endl;
    }
    //}





    
    ////////////////////output data in another text file///////////////////////
    fstream myfile;
    myfile.open("pareto.txt", ios::out);    //write mode
    if(myfile.is_open()){
        cout << Pdata[i]<< endl;
        myfile.close();
    }
    


    infile.seekg(0, ios::beg); //reset file to beginging

    infile.close();
    myfile.close();
    cout << endl;
    return 0;
}