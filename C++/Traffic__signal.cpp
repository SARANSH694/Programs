/*Driving down the street, we see a green traffic light ahead. As we precisely know the pattern of this traffic light, we know exactly how long we have before it will turn red. We wish to compute whether we will pass the traffic light before it turns red at our current speed. Now, write a program to check whether we will cross the light or not with the current speed before it turns red.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    float s,d,t;
    cin>>s>>d>>t;

    if(d<= s*t/3600)
        cout<<"Yes";
    else
        cout<<"No";
        
    return 0;
}