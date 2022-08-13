#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr1[a],arr2[b];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
    map<int,int>mpp;
    for(int i=0;i<a;i++){
        mpp[arr1[i]]++;
    }
    bool k=true;
    for(int i=0;i<b;i++){
        if(mpp[arr2[i]]>=1){
            mpp[arr2[i]]--;
        }
        else{
            k=false;
            break;
        }
    }
    if(k==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}