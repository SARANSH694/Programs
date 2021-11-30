// Asha’s birthday is shortly coming and her parents have planned to arrange for a house party. Deepa was Asha’s best friend and was expecting her birthday since a month. This is because Deepa’s Dad has promised her that he and Deepa together would design a Reverse Talking kitty toy all by themselves and gift it to Asha. Deepa believed that Asha might be overjoyed with this gift from her dear friend.

// Deepa’s Dad put the best of his efforts to design the toy. As a first module in the design he intended to reverse a numeric input given to it. He needs your help to write a recursive method for reversing the digits of the given number N. Please assist him in the task.

#include<iostream>
using namespace std;

int main(){
    int n,rev=0,a;
    cin>>n;

    while(n>0){
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }

    cout<<rev;

    return 0;
}