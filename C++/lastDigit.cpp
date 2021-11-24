//Last digit of number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int last = n%10;
    cout<<"Last digit of the number :"<<last;

    return 0;
}