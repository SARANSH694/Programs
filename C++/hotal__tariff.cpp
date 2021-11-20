/*Jon Snow and the men in the north decided to open the Castle Black for the northerners and the Castle was turned into a Hotel. The Hotel was flourishing and there was high demand for the rooms. So Jon Snow decided to modify the tariff accordingly. Write a C++ program to calculate the hotel tariff. The room rent is 20% high during peak seasons [April-June and November-December].*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,r,d;
    cin>>m>>r>>d;
    int total;
    
    if((m>3)&&(m<7) || (m>10)&& (m<=12)){
        total=(r*1.20)*d;
        cout<<total;
    }
    else if((m>12)||(m<1)){
        cout<<"Invalid Input";
    }
    else{
        total=r*d;
        cout<<total;
    }
    return 0;
}