#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mpp;
    while(n--)
    {
        int k;
        cin>>k;
        mpp[k]++;
    }
    vector<int>v;
    for(auto it:mpp)
    {
        if(it.second==it.first)
        {
            v.emplace_back(it.second);
        }
    }
    if(v.size()==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<v[0]<<" "<<v[v.size()-1];
    }
    return 0;
}