/*It was Christmas Eve and the celebrations remembering the birth of Jesus were going on in full swing at the Cathedral Chapel. The Event Management Team had arranged for some exciting games after the mass worship and feast, where adults and kids of all ages participated very actively. "Chocolate Game" was organized for the kids which involved standard chocolate of n by m pieces. More formally, chocolate is a rectangular plate consisting of n rows and m columns.
Two kids at a moment will play with the chocolate. The first kid takes the chocolate and cuts it into two parts by making either a horizontal or vertical cut. Then, the second kid takes one of the available pieces and divides it into two parts by either making a horizontal or vertical cut. Then the turn of the first kid comes and he can pick any block of the available chocolates and do the same thing again. The player who cannot make a turn loses.
Write a program to find which of the kids will win if both of them play optimally. Output "Yes", if the kid who plays first will win, otherwise print "No". */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=0;
    cin>>n>>m;
    while(1){
         if(m%2==0){
             c++;
             m=m/2;
         }
         else if(n%2==0){
            c++;
            n=n/2;
         }
         else
         break;
    }
    if(c%2 == 0){
        cout<<"No";
    }
    else
        cout<<"Yes";
    return 0;
}