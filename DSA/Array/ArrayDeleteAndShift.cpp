// You are given an array arr(0-based indexing). The size of the array is given by n. 
//You need to delete an element at given index and print the modified array. The arr[i] of array is initially set to i+1.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements of array : \n";
     for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int index;
    cout<<"Enter index position of element to delete : ";
    cin>>index;

    for(int i=index;i<n;i++){
        a[i] = a[i+1];
    }
    a[n-1] =0;
    cout<<"\nNew Array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}