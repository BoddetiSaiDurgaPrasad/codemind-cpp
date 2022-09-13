#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a,b;
    cin>>a>>b;
    ll h=1;
    /*for(int i=0;i<b;i++){
        h=h<<1;
    }*/
    h=h<<b;
    h=h^a;
    cout<<h;
    return 0;
}