//Largest of the three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c )
    cout<<a;
    else if(a<b && b>c)
    cout<<b;
    else 
    cout<<c;
    return 0;
}