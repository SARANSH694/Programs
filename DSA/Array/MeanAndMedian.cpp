//Given an array a[ ] of size N. The task is to find the median and mean of the array elements.(Sorted Array)
// Mean is average of the numbers and median is the element which is smaller than half of the elements and greater than remaining half.  
//If there are odd elements, the median is simply the middle element in the sorted array. 
//If there are even elements, then the median is floor of average of two middle numbers in the sorted array. 
//If mean is floating point number, then we need to print floor of it.
#include<iostream>
#include<cmath>
using namespace std;

void mean(int a[],int n){
    float mean,sum=0;
    
    for(int i=0;i<n;i++){
    sum=sum+a[i];
    }
    mean = floor(sum/n);
    cout<<"Mean :"<<mean;
}

void median(int a[],int n){
    int median;
    if(n%2 != 0)
        median = a[n/2];
    else if(n%2 == 0)
        median = floor((a[(n-1)/2]+a[n/2]) /2);

    cout<<"\nMedian :"<<median;
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

mean(a,n);
median(a,n);

return 0;
}