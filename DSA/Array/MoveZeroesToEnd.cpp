// Move zeroes to the end of the array
// Time complexity O(n)  Space Complexity O(1)

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

    int count =0;
    for(int i=0;i<n;i++){
        if(a[i] != 0){
            swap(a[i],a[count]);
            count++;
        }
    }
    cout<<"New Array :\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}