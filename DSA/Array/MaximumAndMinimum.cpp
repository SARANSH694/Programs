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

    int max=a[0],min=a[0];

        for(int i=1;i<n;i++){
            if(a[i]>max)
                max =a[i];
            
            if(a[i]<min)
                min=a[i];
        }
        cout<<"Max element is :"<<max;
        cout<<"\nMin element is :"<<min;
    return 0;
}