// Reverse the array
// Time complexity O(n)  Auxilary Space O(1)

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

   int high = n-1,low=0;

   while(low<high){
       int temp = a[low];
       a[low] = a[high];
       a[high] = temp;
   
   low++;
   high--;
   }

    cout<<"Reversed Array :\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}