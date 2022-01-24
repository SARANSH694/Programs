// You are given an array arr(0-based indexing). The size of the array is given by n. You need to get the element at index i and return it. If no element exists at i then return -1.

#include<iostream>
using namespace std;

int findElement(int a[], int n, int index){

    for(int i=0;i<n;i++){
        if(i == index && a[i] != '\0')
            return a[i];
        else if(i == index && a[i] =='\0')
            return -1;
    }
return -1;
}


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
    cout<<"Enter index position of elemnt to find : ";
    cin>>index;
    int e = findElement(a , n , index);
    cout<<e;
    return 0;
}