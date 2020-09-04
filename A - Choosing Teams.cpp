#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,x,y,n,m,sum=0;
    int ara[6];
    for(i=0;i<=5;i++){
        ara[i]=0;
    }
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        ara[a]++;
    }
    for(i=0;i<=4;i++){
            //printf("%d   ",ara[i]);
        if(5-i>=m){
            sum=sum+ara[i]/3;
            //printf("%d\n",sum);
        }
        ara[i+1]=ara[i+1]+ara[i]%3;
    }

    printf("%d\n",sum);






return 0
