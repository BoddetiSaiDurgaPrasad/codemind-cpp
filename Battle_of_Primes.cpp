#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==0 || n==1) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    a=a+b;
    a++;
    int c=1;
    while(true){
        if(isprime(a)){
            break;
        }
        a++;
        c++;
    }
    cout<<c;
    return 0;
}