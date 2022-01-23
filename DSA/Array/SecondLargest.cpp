// Find second largest element in array and resturn its index
// Time complexity O(n)  Auxilary space threta(1)

#include<iostream>
using namespace std;

int secondLargest(int a[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[largest]){
            res = largest;
            largest = i;
        }
        else if(a[i] != a[largest]){
            if(res=-1 || a[i]>a[res])
                res=i;
        }
    }
    return res;
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

    int second = secondLargest(a,n);
    cout<<"Second largest elemnt in array : "<<a[second];
return 0;
}