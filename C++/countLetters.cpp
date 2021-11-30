// Drupadh has a problem in dark lord's city. Each house strangely has only one letter instead of a house number. Sometimes the house numbers (letters) are repeated - that is two houses have the same name. Drupadh has been asked by the dark lord to find how many times each house name is repeated.

// The input is given as a string

// Sample testcases
// Input 
// darklordcity
// Output 1
// d 2
// a 1
// r 2
// k 1
// l 1
// o 1
// c 1
// i 1
// t 1
// y 1

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
   int i = 0, alphabet[26] = {0}, j;
   for(i=0;i<s.length();i++){
      if (s[i] >= 'a' && s[i] <= 'z') {
         j = s[i] - 'a';
         ++alphabet[j];
      }
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;

    return 0;
}