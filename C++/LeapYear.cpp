#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year % 4 == 0 && year%100!=0)
        cout<<year<<" is a leap year";
    else if(year%400)
        cout<<year<<" is not a leap year";
    else 
        cout<<"Not a leap year";

    return 0;
}