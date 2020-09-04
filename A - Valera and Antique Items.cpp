#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x=0,flag2=0;
    scanf("%d %d",&n,&m);
    int ara[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        int flag=0;
        for(j=1;j<=a;j++){
            scanf("%d",&b);
            if(flag==0&&m>b){
                flag=1;
                ara[x]=i;
                x++;
                flag2=1;
            }
        }
    }
    printf("%d\n",x);
    if(flag2!=0){
    printf("%d",ara[0]);
    for(i=1;i<x;i++){
        printf(" %d",ara[i]);
    }
    }
    printf("\n");

return 0;
}
