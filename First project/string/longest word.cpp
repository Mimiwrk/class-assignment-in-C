#include<iostream>
//#include<cstring>
using namespace std;
void MaxLength(string &s){
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
   cout<< "longest Word : " << longest;
}
int main() {
   string a = "Learn Programming at TutorialsPoint";
   MaxLength(a);
}
