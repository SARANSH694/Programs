// Program to print the digits in words for a number.

#include<bits/stdc++.h>
using namespace std;

void printValue(char digit){
        switch(digit){
            case '0':
            cout<<"Zero ";
            break;
             case '1':
            cout<<"One ";
            break;
             case '2':
            cout<<"Two ";
            break;
             case '3':
            cout<<"Three ";
            break;
             case '4':
            cout<<"Four ";
            break;
             case '5':
            cout<<"Five ";
            break;
             case '6':
            cout<<"Six ";
            break;
             case '7':
            cout<<"Seven ";
            break;
             case '8':
            cout<<"Eight ";
            break;
             case '9':
            cout<<"Nine ";
            break;
        }
}

void Recursive(string N){
    int i,length=N.length();
    for(i=0;i<length;i++){
        printValue(N[i]);
    }
}

int main(){
    string N;
    cin>>N;
    Recursive(N);
    return 0;
}