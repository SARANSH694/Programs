/*It’s your job to calculate the cost of replacing the damaged battle droids and to check whether it is within the budget limit of Rs.15000. The cost of the equipment and the parts are given below. Write a program to solve this problem. Blast Rifle Rs. 350.34 Visual Sensors Rs. 230.90 Auditory Sensors Rs. 190.55 Arms Rs. 125.30 Legs Rs. 180.90.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int b,v,a,arms,legs;
    cin>>b>>v>>a>>arms>>legs;
    float total;
    total=(b*350.34)+(v*230.90)+(a*190.55)+(arms*125.30)+(legs*180.90);
    if(total<=15000)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;    
}