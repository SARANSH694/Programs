#include<bits/stdc++.h>
using namespace std;
#define BIT_SIZE 16
class Solution
{
    public:
    int leftRotate(int n, unsigned int a)
    {
        return (( n << a ) | (n >> (BIT_SIZE - a)));
    }

    int rightRotate(int n, unsigned int a)
    {
        return (( n >> a ) | (n << (BIT_SIZE - a)));
    }
};

int main()
{
    Solution res;
    int n,a;
    cin>>n>>a;

    cout<<res.leftRotate(n,a);
    cout<<endl<<res.rightRotate(n,a);
    return 0;
}