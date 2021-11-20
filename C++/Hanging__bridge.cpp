/*At the annual "KrackerJack Karnival", there was the newest attraction ever in the City, the "Hanging Bridge". Visitors will be able to walk 200ft on the bridge, hanging around 50ft above the ground, and enjoy a wide-angle view of the breathtaking greenery.
The Hanging Bridge was inaugurated successfully in coordination with the Event Manager Rahul. There is a limit on the maximum number of people on the bridge and Rahul has to now ensure the count of people on the bridge currently should not exceed the limit. He then approximately estimated that C adults and D kids who came to the show were on the hanging bridge. He also noticed that there are L legs of the people touching the bridge.
Rahul knows that kids love to ride on the adults and they might ride on the adults, and their legs won't touch the ground and hence he would miss counting their legs. Also, Rahul knew that the adults would be strong enough to ride at max two kids on their back.
Rahul is now wondering whether he counted the legs properly or not. Specifically, he is wondering is there some possibility of his counting being correct. Please help Rahul in finding it. */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int C,D,L;
    int algo=(C+D)*2;

    if(algo>=L)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}