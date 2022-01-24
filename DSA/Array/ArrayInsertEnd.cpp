#include<iostream>
using namespace std;

int  main(){
    int sizeofArray = 5;
    int a[sizeofArray] = {1,2,3,4};

    a[sizeofArray - 1] = 90;

    for(int i=0;i<sizeofArray;i++){
        cout<<a[i]<<" ";
    }

}