// You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.

// Example 1:

// Input:
// n = 1
// Output:  1
// Explanation: Digital root of 1 is 1
// Example 2:

// Input:
// n = 99999
// Output: 9
// Explanation: Sum of digits of 99999 is 45
// which is not a single digit number, hence
// sum of digit of 45 is 9 which is a single
// digit number.

#include<iostream>
using namespace std;


int main(){
int n,sum,a;
cout<<"Enter the number :";
cin>>n;

if(n !=0){
    while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    if(sum % 9 == 0)
        cout<<"Digital root is 9";
    else if(sum % 9 != 0)
        cout<<"Digital root is "<<sum%9;
    }

else{
    cout<<"Number entererd is 0";
}


return 0;
}