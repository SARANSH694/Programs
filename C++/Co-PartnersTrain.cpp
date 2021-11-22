// Tim and Bob are off to a famous Education Fair "Knowledge Forum 2017" at Uzhlanda. This time they have to travel without their guardians. Tim got very interested in the arrangement of seats inside the train coach.
// The entire coach could be viewed as an arrangement of consecutive blocks of size 8.

// BerthNumber Compartment
// 1-8 1
// 9-16 2
// 17-24 3
// ... and so on  

// Each of these size-8 blocks are further arranged as:
//  1LB, 2MB, 3UB, 4LB, 5MB, 6UB, 7SL, 8SU
//  9LB, 10MB, ...
// .......
// .......
// Here LB denotes lower berth, MB middle berth and UB upper berth.

// The following berths are called Co-Partners in Train:
// 3 UB 6 UB
// 2 MB 5 MB
// 1 LB 4 LB
// 7 SL 8 SU
// and the pattern is repeated for every set of 8 berths. 
// Tim and Bob are playing this game of finding the co-partner in train of each berth. Write a program to do the same.

// Input format
// The input consists of an integer N, which corresponds to the berth number whose neighbor is to be found out.

// Output format
// The output is to display the berth of the neighbor of the corresponding seat
#include<iostream>
using namespace std;
int main(){
    int n,count;
    cin>>n;
    count=n%8;
    if(count==0)
    n=n-1;
    else if(count<4)
    n=n+3;
    else if(count<7)
    n=n-3;
    else if(count==7)
    n=n+1;
    
    switch(count){
        case 0:
        cout<<n<<"SL";
        break;
        case 1:
        cout<<n<<"LB";
        break;
        case 2:
        cout<<n<<"MB";
        break;
        case 3:
        cout<<n<<"UB";
        break;
        case 4:
        cout<<n<<"LB";
        break;
        case 5:
        cout<<n<<"MB";
        break;
        case 6:
        cout<<n<<"UB";
        break;
        case 7:
        cout<<n<<"SU";
        break;
    }
    
    return 0;
}