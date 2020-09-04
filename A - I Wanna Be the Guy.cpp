#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n,m;
    scanf("%d",&n);
    int ara[n+1];
    for(i=0;i<=n;i++){
        ara[i]=0;
    }
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        ara[b]++;
    }
    scanf("%d",&c);
    for(i=1;i<=c;i++){
        scanf("%d",&d);
        ara[d]++;
    }
    int flag=0;
    for(i=1;i<=n;i++){
        if(ara[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("I become the guy.\n");
    }else{
    printf("Oh, my keyboard!\n");
    }









return 0;
}
