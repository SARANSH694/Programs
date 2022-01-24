//Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. 
//If both elements have the same frequency, then return the smaller element.
//Note:  We need to return the element, not its count.

#include<iostream>
using namespace std;

void majorityWins(int x,int y,int countx,int county){
    if(countx > county)
        cout<<"\n Winner : "<<x;
    else if(countx < county)
        cout<<"\n Winner : "<<y;
    else if(countx == county){
        int w = (x>y)?y:x;
        cout<<"\n Winner : "<<w;
        }
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

int x,y,countx=0,county=0;
cout<<"Enter elements X and Y: ";
cin>>x>>y;

for(int i=0;i<n;i++){
    if(a[i] == x)
        countx++;
    if(a[i] == y)
        county++;
}

majorityWins(x,y,countx,county);

return 0;
}