#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int swap_nibbles(unsigned int a)
    {
        unsigned int swap=0;
        swap=((a & 0b00001111) << 4 | (a & 0b11110000) >>4);
        return swap;
    }
};

int main ()
{
    Solution res;
    int n;
    cin>>n;
    cout<<res.swap_nibbles(n);
}