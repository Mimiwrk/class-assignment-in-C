//for a single word
// #include<iostream>
// #include<string>
// using namespace std;
// void order(string &m){
//     //string m;
//     int s = m.length();     //s = size of the string
//     int temp;
//     for(int i=0; i<s; i++){     //compare 2 characters, i=first, j=second
//         for(int j=i+1; j<s; j++){
//             if(m[i]>m[j]){      //swaping the character if i>j
//                 temp = m[i];
//                 m[i] = m[j];
//                 m[j] = temp;
//             }
//         }
//     }
//     cout << "New message : " << m;

// }

// int main(){
//     string message;
//     char size[50];   //array that store 50 words

//     cout << "Type the message : ";
//     getline(cin, message);

//     order(message);
//     return 0;
// }
