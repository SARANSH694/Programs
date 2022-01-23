// Left Rotate the array by one
// Time complexity O(n)   Auxilary Space O(1)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements of array : ";
     for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int temp =a[0];
    for(int i=1;i<n;i++){
        a[i-1] = a[i];
    }
    a[n-1] = temp;

    cout<<"Left rotated array by one :\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}