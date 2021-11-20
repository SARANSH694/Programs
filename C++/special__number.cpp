/*Janu wants to check if the given number is a special number or not.
For example, 1729 is a special number since which, when its digits are added together, produces a sum which, when multiplied by its reversal, yields the original number:
1 + 7 + 2 + 9 = 19
19 × 91 = 1729 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,s,rev,a,mul,number;
    cin>>n;
    number=n;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    s=sum;
    while(sum>0){
        a=sum%10;
        rev=(rev*10)+a;
        sum=sum/10;
    }
    mul= s * rev;

    if(number == mul)
        cout<<number<<" is a special number";
    else
        cout<<number<<" is not a special number";
    return 0;
}