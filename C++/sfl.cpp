/* Vivek wants to count the number of digits in the given integer and find the sum of the first and last digits of the number. Write a suitable program to complete the above task.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long n,c=0,sum,a,rev=1,last,first;
    cin>>n;
    last=n%10;
    while(n>0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
        c++;
    }
    first=rev%10;
    sum=first+last;
    cout<<"Sum of first and last digit - "<<sum<<endl;
    cout<<"Number of digits - "<<c;

    return 0;
}