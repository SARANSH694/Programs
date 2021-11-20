#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int count_1s(int a)
    {
       int count=0;
       while(a != 0)
       {
           a = (a & (a << 1));
           count++;
       }
       cout<<count<<endl;    
       return 0;   
    }
};

int main()
{
    Solution res;
    int n,input;
    cin>>n;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        v.push_back(input);
    }

    for (int i = 0; i < v.size(); i++)
    {
        res.count_1s(v[i]);
    }
    
    return 0;
}