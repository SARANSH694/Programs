/*Seetha, a maths teacher explained the factorial concept in her class. After learning the factorial concept, Ankit was playing with numbers and found a link between the sum of the factorial of digits in a number is equal to the number itself. 
He was excited and started to find more numbers like this.
Help Ankit by writing a suitable java program to check the given numbers.*/

#include<bits/stdc++.h>
using namespace std;
int factorial(int a){
    int f=1;
    while(a>0){
        f=f*a;
        a--;
    }
    return f;
}

int main(){
    int n,number,digit,sum=0;
    cin>>n;
    number=n;
    while(n>0){
        digit=n%10;
        sum=sum+factorial(digit);
        n=n/10;
    }
    if(number == sum)
        cout<<number<<" Strong number";
    else
        cout<<number<<" Not Strong number";

    return 0;
}