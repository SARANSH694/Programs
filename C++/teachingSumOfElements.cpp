#include<iostream>
using namespace std;

int wrongsetsum(int n,int a[]){
    int sum = 0;
    for(int i=0;i<n;i++){
    sum = sum + abs(a[i]);
}
    return sum;
}

int correctsetsum(int n,int a[]){
    int sum = 0;
    for(int i=0;i<n;i++){
    sum = sum + a[i];
}
    return sum;
}

int main(){
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<wrongsetsum(n, a)<<endl;
    cout<<correctsetsum(n,a)<<endl;

}