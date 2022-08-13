#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,c=0;
        cin>>a;
        
        while(a){
            if(a&1==1)c++;
            a=a>>1;
        }
        cout<<c<<"
";
    }
    return 0;
}