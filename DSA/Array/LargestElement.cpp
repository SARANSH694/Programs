#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the array : \n";
     for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
    }

        cout<<"Largest number in the array : "<<max;
    return 0;
}