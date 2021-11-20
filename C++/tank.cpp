/*Howard Wolowitz has a cylindrical tank in which he has to fill water at certain hours. For every one hour, his house will receive N liters of water from the corporation. Find out whether he will be able to fill the tank with water in X hours. The radius and height of the cylinder are given as the input.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,h,n,x;
    cin>>r>>h>>n>>x;
    int algo=(3.14)*(pow(r,2))*h;
    int volr=n*x;

    if(algo<=volr)
        cout<<"The tank can be filled within "<<x<<" hours";
    else
        cout<<"The tank cannot be filled within "<<x<<" hours";
    return 0;
}