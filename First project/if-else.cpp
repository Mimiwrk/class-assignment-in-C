#include <iostream>
//#include <cmath>
using namespace std;
/* – Assign a value to double variable cost depending on the value of integer variable
distance as follows:
Distance				                Cost
-----------------------------------		 ----------
0 through 100 				            5.00
More than 100 but not more than 500     8.00
More than 500 but less than 1,000	    10.00
1,000 or more 				            12.00
*/

int main(){
    
int numNeighbors = 2;
if (numNeighbors >= 3 || numNeighbors == 4){
    ++numNeighbors;
    cout << "You are dead!" << endl;
}
else
    --numNeighbors;

}