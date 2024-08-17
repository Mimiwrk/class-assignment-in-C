//arrange from highest num to lowest num to an array from an unsorted array
#include <iostream>
using namespace std;
int main(){
    int const LENGTH = 10;
    int Pdata[LENGTH] = {2, 56, 5, 16};
    int i, x, max, temp;

    //check from first index to last
    for(i=0; i<10;i++){
        int max = i;    //first num is max
        for(int j=i+1; j <10; j++){     //checking with the next num
            if(Pdata[max] < Pdata[j]){       //if it less than the next num, next num is max
                max = j;
            }
        }
        //swapping number(max come first)
        temp = Pdata[max];
        Pdata[max] = Pdata[i];
        Pdata[i] = temp;

        //out put the sorted array
        for(x=0;x<Pdata[i];x++){
            cout << "*";
        }
        cout << Pdata[i]<< endl;
    }
    return 0;
}


//switch with these two for loop if want to sort from min to max numbers
/* for (i = LENGTH-1; i >= 0; i--)    
       for (int j = i ; j >= 0; j--) */