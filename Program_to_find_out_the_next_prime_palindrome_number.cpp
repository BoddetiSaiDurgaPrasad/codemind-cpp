#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==0 || n==1)return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool ispal(int n){
    int temp=n,s=0;
    while(n){
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s==temp;
}
int main(){
    int n,k=0;
    cin>>n;
    n++;
    while(true){
        if(ispal(n) && isprime(n)){
            k=n;
            break;
        }
        n++;
    }
    cout<<k;
    return 0;
}