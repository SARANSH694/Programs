/* If Cricket is the most popular outdoor game in India, Carrom is not too behind as one of most played indoor games.
Let's now make use of our knowlege in operators & conditional statements to compute the points scored at the end of a round in Carrom Game.
Carrom is a board game where two participants (teams) play. It consists of 9 white coins, 9 black coins and a red coin. The first team that finishes all their coins wins (given that red has been pocketed by one of the teams). The points are awarded based on the number of left-over coins of the opposition (loser) in the board. If the winning team has pocketed the red, they get an additional 5 points. Write a program to compute the score of winner at the end of a round.
If the number of coins left on the board is either less than 1 or greater than 9 display "Invalid Input".
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char b;
    cin>>n>>b;
    if(n<1 || n>9)
        cout<<"Invalid Input";
    else if(b == 'y'|| b == 'Y'){
        n=n+5;
        cout<<n;
    }
    else
    cout<<n;

    return 0;
}

