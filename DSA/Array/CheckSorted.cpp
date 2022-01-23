// Check if array is sorted (increasing order)
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
    bool flag =1;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            flag=0;
            break;
            }
    }
    if(flag == 0)
        cout<<"Not sorted array";
    else if(flag ==1)
        cout<<"Sorted array";
    return 0;
}