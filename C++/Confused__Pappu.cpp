#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int diff(long long n)
    {
        long long temp=n;
        string s="";
        s=to_string(n);

        long long max = 0;
        for (int i = (s.size() - 1); i >= 0; i--)
        {
            if(s[i]=='6')
                max = (max*10)+9;
            else
                max = (max*10) + (s[i] - '0');
        }
        cout<<(max-n)<<endl;
        return 0;
    }
};

int main()
{
    Solution res;
    string s;
    long long n, arr[103];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
            cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        res.diff(arr[i]);
    }
}