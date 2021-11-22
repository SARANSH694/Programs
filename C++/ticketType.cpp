// "Fantasy Kingdom" is a brand new Amusement park that is going to be inaugurated shortly in the City and is promoted as the place for breath-taking charm. The theme park has more than 30 exhilarating and craziest rides and as a special feature of the park, the park Authorities has placed many Ticketing Kiosks at the entrance which would facilitate the public to purchase their entrance tickets and ride tickets.

// The Entrance Tickets are to be issued typically based on age, as there are different fare for different age groups. There are 2 types of tickets – Child ticket and Adult ticket. If the age given is less than 15, then Child ticket is issued whereas for age greater than equal to 15, Adult ticket is issued. Write a piece of code to program this requirement in the ticketing kiosks

// Input format
// First line of the input is an integer that corresponds to the age of the person.

// Output format
// Output should display "Child Ticket" or "Adult Ticket" based on the conditions given.
// Refer sample input and output for formatting specifications

#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    
    if(age<15)
    cout<<"Child ticket";
    else if(age >=15)
    cout<<"Adult ticket";
    return 0;
}