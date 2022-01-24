// You are given an array arr(0-based index). The size of the array is given by sizeOfArray. You need to insert an element at given index and print the modified array.

#include<iostream>
using namespace std;

int  main(){
 int index,element;
    int sizeofArray = 5;
    int a[sizeofArray] = {1,2,3,4};

   cout<<"Enter index :";
   cin>>index;
   cout<<"\nEnter the element :";
   cin>>element;

    for(int i=sizeofArray-1;i>=index;i--)
            a[i] = a[i-1];
        a[index] = element;
    

    cout<<"\nNew Array :";
    for(int i=0;i<sizeofArray;i++){
        cout<<a[i]<<"  ";
    }
return 0;
}