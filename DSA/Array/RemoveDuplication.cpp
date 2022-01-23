// Remove duplicate elemnts from sorted array and return the new size of the array.
// Time complexity O(n)  Space Complexity O(1)

#include<iostream>
using namespace std;

int removeDuplication(int a[],int n){
    int size = 1;
    for(int i=1;i<n;i++){
        if(a[size-1] != a[i]){
            a[size] = a[i];
            size++;
        }
    }
    return size;
}


int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements of array : ";
     for(int i=0;i<n;i++){
        cin>>a[i];
    }

   int s = removeDuplication(a,n);
   cout<<s;
return 0;
}