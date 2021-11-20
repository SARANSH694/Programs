/*Margaery and Tommen were playing games outside in the castle of Red Keep and then Margaery was challenging Tommen that he cannot solve questions from Mathematics as it will be too difficult for him. Tommen wanted to prove her wrong and so he asked her to give any question and he will solve. Margaery gave a few values and asked him to tell whether the circles will intersect or not. Write a program to determine if two circles intersect each other.

Input format
Input consists of 6 integers.

The first input is an integer which denotes the x-coordinate of the center of the first circle.

The second input is an integer which denotes the y-coordinate of the center of the first circle.

The third input is an integer which denotes the radius of the first circle.

The next 3 integers denote the x, y, and radius of the second circle.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,r1,x2,y2,r2;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    float distance =ceil(sqrt(abs((x2-x1)*(x2-x1) - (y2-y1)*(y2-y1))));
    int rsum= r1+r2;

    if(rsum == distance)
        cout<<"Tangential";
    else if(rsum > distance)
        cout<<"Overlap";
    else 
        cout<<"DO not overlap";

    return 0;
}