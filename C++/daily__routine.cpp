/*Brendon is a little techno-whiz whose IQ is out of the charts. He has set up a laboratory at home for his research and development and was once approached by an Event Management firm to design them a Robot that would log all the activities carried out in an event at various instants during the day. This would help them keep a track and in smooth functioning of events.
Brendon, after long days of hard work designed one such Robot but wanted to test it on his own daily routines. His daily routine is very simple, he starts his day working in a computer, then he eats food and finally proceeds for sleeping thus ending his day. He has programmed his Robot to log the activities of him at various instants during the day.
Today it recorded activities that Brendon was doing at N different instants. These instances are recorded in chronological order (in increasing order of time). This log is provided to you in form of a string s of length N, consisting of characters 'C', 'E' and 'S'. If s[i] = 'C', then it means that at the i-th instant Brendon was working in Computer, 'E' denoting he was eating and 'S' means he was sleeping.
Write a program to tell whether the record log made by the robot could possibly be correct or not. */
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cin.getline(s,100);
    bool flag=true;

    for(int i=1;i<strlen(s);i++){
        if(s[i]<s[i-1]){
            flag=false;
            break;
        }
    }
    if(flag == true)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}