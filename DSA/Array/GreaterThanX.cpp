// Given an unsorted array arr[] of size N containing non-negative integers.
// You will also be given an integer X, the task is to count the number of elements which are strictly greater than X. 
//The given integer may or not be present in the array given.

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

    int x;
    cout<<"Enter x element : ";
    cin>>x;

    int c=0;
    for(int i=0;i<n;i++){
        if(x < a[i])
            c++;
    }

    cout<<"The number of elements which are strictly greater than "<<x<<" :"<<c;
    
    return 0;
}