// Largest element in an array
// Time complexity : O(n)
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
    int res=0;
    for(int i=1;i<n;i++){
        if(a[res]<a[i])
            res=i;
    }

        cout<<"Largest number in the array : "<<a[res];
    return 0;
}