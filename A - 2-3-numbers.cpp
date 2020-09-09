#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[100000];
    long long i,j,a,b,n,m,x=4,c=1,d=3,sum;
    a=2;b=3;
    ara[0]=1;
    ara[1]=2;
    ara[2]=3;
    ara[3]=9;
    j=1;
    while(j<35){
            sum=0;
        for(i=c;i<=d;i++){
            ara[x]=ara[i]*2;
            x++;
            sum++;
        }
        ara[x]=ara[d]*3;
        x++;
        j++;
        sum++;
        c=c+sum-1;
        d=d+sum;
    }
    while(scanf("%lld %lld",&n,&m)==2){
            sum=0;
        for(i=0;i<700;i++){
            if(ara[i]>=n&&ara[i]<=m){
                sum++;
            }
        }
        printf("%lld\n",sum);



    }
return 0;
}


