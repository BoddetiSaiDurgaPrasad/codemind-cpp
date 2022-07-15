#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int h;
            cin>>h;
            arr[i][j]=h;
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0 || i==0 ||i==n-1 || j==m-1){
                c+=arr[i][j];
            }
            
        }
    }
    cout<<c;
    return 0;
}