// Professor gave him a string s. He taught about pure string. Professor assigned an assignment to Hariharan. The assignment is Hariharan need to determine 
//the length of the highest pure string which is a substring of s.

// Note:Pure String is a string that only consists of vowels.

// Input format
// First line contains a string s.

// Output format
// Print an integer denoting the length of the highest pure substring, that is substring comprises only vowels.
// Input  abcaac
// Output 2
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int countString(string s){
    int i=0,c=0,res=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            c++;
        else{
            res = (res ,c);
            c=0;
        }
    }
    return max(res,c);
}

int main(){
    string s;
    cin>>s;

    cout<<countString(s);
    return 0;
}