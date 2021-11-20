/*A wall is of length L and breadth B. Leonardo Da Vinci is trying to fit two rectangular paintings in it. He wants to fit these paintings on the wall such that they do not overlap with each other or they should not occupy space outside the area of the wall. He also knows the length and breadth of both paintings. Help him in finding whether the two paintings can fit onto the wall properly or not.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int lw,bw,l1,b1,l2,b2;
    cin>>lw>>bw>>l1>>b1>>l2>>b2;
    int aw,a1,a2;
    aw=lw*bw;
    a1=l1*l2;
    a2=l2*b2;
    if(a1+a2 <= aw)
        cout<<"Leonardo can fix both paintings";
    else
        cout<<"Leonardo cannot fix both paintings";

    return 0;
}