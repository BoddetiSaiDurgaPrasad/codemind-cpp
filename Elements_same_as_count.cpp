#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll>mpp;
    for(auto it:v){
        mpp[it]++;
    }
    vector<ll>h;
    for(auto it:v){
        if(mpp[it]==it && count(h.begin(),h.end(),it)==0){
            h.emplace_back(it);
        }
    }
    if(h.size()==0){
    h.emplace_back(-1);
        
    }
    for(auto it:h){
        cout<<it<<" ";
    }
    return 0;
}