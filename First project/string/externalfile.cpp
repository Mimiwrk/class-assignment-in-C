//oftream - stream class to write on files
//ifstream - read from files
//fstream - read and write from files

#include<iostream>
#include<string>
#include<fstream>   //for external files access
using namespace std;

string MaxLength(string &s){
   int StrLength = s.length();
   int startIndex = 0, endIndex = 0;
   
   int minLength = StrLength, maxLength = 0, currentLength;
   string longest;
   while (endIndex <= StrLength){
      if (s[endIndex] != '\0' && s[endIndex] != ' ')    // \0 is treated as NULL Character.
         endIndex++;
      else{
         currentLength = endIndex - startIndex;
         if (currentLength > maxLength){
            longest = s.substr(startIndex, currentLength);
            maxLength = currentLength;
         }
         endIndex++;
         startIndex = endIndex;
      }
   }
   return longest;
}

string vowel(string line){

int vowels=0;
int longestvowels;

for(int i = 0; line[i]!='\0'; i++)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            vowels++;
        }
    }
    return vowels;
}

int main(){
    fstream myfile;
    //write the file(ios::out)
    myfile.open("words.txt", ios::out);     //file name is "words.txt"
    if(myfile.is_open()){
        myfile << "Hello this is first file.";      //we can use either myfiile(store in the file) or cout(print out to the console)
        myfile << "\nThis is second line.";
        myfile << "\nThere is an ant in the apple.";
        myfile << "\nToday is Monday and I'm doing nothing.";
        myfile << "\nToday is Friday and I'm doing nothing.";
    myfile.close();     //close the file
    }

    //read the file(ios::in)
    myfile.open("words.txt", ios::in);
    if(myfile.is_open()){
        string line;
        while(getline(myfile,line)){        //read from myfile and store into line
            cout << "Read : \n" << line << endl;
            cout << "longest word : " << MaxLength(line) << endl;
            cout << "highest percentage of vowels : " << vowel(line);
        }
    myfile.close();     //close the file
    }

    //append into the file(ios::app)
    myfile.open("words.txt", ios::app);
    if(myfile.is_open()){
        cout << "longest word : " << MaxLength(line) << endl;
        cout << "highest percentage of vowels : " << vowel(line);
    myfile.close();     //close the file
    }
}

