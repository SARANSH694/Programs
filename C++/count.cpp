/*Mars Spell Bee is the largest self-motivated spelling competition held for school children. The children from different schools who are participating in the competition will be given a registration code. The registration is on a first come first serve basis to a maximum of N entries.
The competition is conducted in two different galleries of the venue. Just for the ease of their management, the Event organizers have announced to divide the children into two groups, to attend the competition in the two chosen galleries. By that note, all those children who have their registration code as an even number will be put in one gallery and those with odd number will be in another gallery.
Help the organizers to find count of number of even registration codes and odd registration codes from the total N.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[n],i=0,e=0,o=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    cout<<e<<" "<<o;

    return 0;
}