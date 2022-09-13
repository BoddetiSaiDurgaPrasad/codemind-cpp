#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    if(n<=0){
        cout<<"False";
    }
    else{
        ll k=!(n&(n-1));
        if(k==1){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    return 0;
}