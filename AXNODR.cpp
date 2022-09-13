#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b=1;
        cin>>a;
        for(ll i=2;i<=a;i++){
            ll h=i;
            if(i%2==0){
                b=b^h;
            }
            else{
                b=b&h;
            }
        }
        cout<<b<<"
";
    }
    return 0;
}