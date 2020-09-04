#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sum=0,n;
    int ara[5];
    for(i=0;i<5;i++){
        ara[i]=0;
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        ara[a]++;
    }
    sum=ara[4];
    while(ara[2]>1){
        ara[2]=ara[2]-2;
        sum++;
    }
    while(ara[3]>0&&ara[1]>0){
        ara[3]--;
        ara[1]--;
        sum++;
    }
    while(ara[3]>0){
        ara[3]--;
        sum++;
    }
    while(ara[2]>0&&ara[1]>0){
        ara[2]=ara[2]-1;
        ara[1]=ara[1]-2;
        sum++;
    }
    while(ara[1]>0){
        ara[1]=ara[1]-4;
        sum++;
    }
    while(ara[2]>0){
        ara[2]=ara[2]-2;
        sum++;
    }
    printf("%d\n",sum);


return 0;
}
