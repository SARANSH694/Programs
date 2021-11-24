//You pick one number the opponent picks the next number the last one to pick wins
//eg:- 5   1 1 1 1 1 player 1 wins
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2!=0)
    cout<<"Player one wins";
    else 
    cout<<"Player two wins";

    return 0;
}