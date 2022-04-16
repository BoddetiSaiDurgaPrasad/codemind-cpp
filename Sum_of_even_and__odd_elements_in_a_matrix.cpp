#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,d=0,h;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
            h=arr[i][j];
            if(h%2==0){
                c=c+h;
            }else{
                d=d+h;
            }
        }
    }
    printf("%d %d",c,d);
    return 0;
}