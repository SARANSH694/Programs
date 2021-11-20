/*Richard Castle wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt in Flipkart and is surprised to see the same shirt in Amazon and Snapdeal as well. So he decided to buy the shirt from the website which offers it at the least price. The price of the shirt, discount %, and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt on each website and decide which website has the lowest price.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int fa,fd,fs,sa,sd,ss,aa,ad,as;
    cin>>fa>>fd>>fs>>sa>>sd>>ss>>aa>>ad>>as;
    
    int df,ds,da;
    df=((fa*fd)/100);
    ds=((sa*sd)/100);
    da=((aa*ad)/100);

    int tf,ts,ta;
    tf=fa+fs-df;
    ts=sa+ss-ds;
    ta=aa+as-da;
    
    cout<<"In Flipkart Rs."<<tf<<endl;
    cout<<"In Snapdeal Rs."<<ts<<endl;
    cout<<"In Amazon Rs."<<ta<<endl;

    if(tf<=ts && tf<=ta)
        cout<<"He will prefer FlipKart";
    else if(ts<=tf && ts<=ta)
        cout<<"He will prefer Snapdeal";
    else 
        cout<<"He will prefer Amazon";

    return 0;
}