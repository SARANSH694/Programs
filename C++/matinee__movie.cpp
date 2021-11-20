/*In the kingdom of Hollywood, theatres are open 24/7. In a theatre named Escape Avenue, according to a 24-hour clock, the show timings are 10.15, 13.30, 18.00, and 22.00. The normal price of an adult ticket is 8.00. However, the price of an adult ticket for the matinee show is $5.00. Adults are those over 13 years. The normal price of a child ticket is 4.00. However, the price of a child ticket for the matinee show is 2.00. Write a program that determines the price of a movie ticket.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    double time;
    cin>>age;
    cin>>time;
        if(age<14){
            if(time==10.15 || time==18.00 || time==22.00){
                cout<<"$4.00";
            }
            else if(time == 13.00){
                cout<<"$2.00";
            }
        }
        else if(age>13){
             if(time==10.15 || time==18.00 || time==22.00){
                cout<<"$8.00";
            }
            else if(time == 13.00){
                cout<<"$5.00";
            }
        }

    return 0;
}