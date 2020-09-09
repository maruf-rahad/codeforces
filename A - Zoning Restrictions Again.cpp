#include<bits/stdc++.h>
using namespace std;
long long ara[110];

void zero(int n,int h)
{
    int i;
    for(i=0;i<n+2;i++)
    {
        ara[i] = h;
    }
}
int main()
{
    long long a,b,i,j,x,y,sum,flag,m,c,h,n;


    while(scanf("%lld %lld %lld",&n,&h,&m)==3)
    {
        zero(n,h);

        for(i=1;i<=m;i++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);

               for(j=a;j<=b;j++)
               {
                   ara[j] = min(ara[j],c);
               }

        }
        long long  sum = 0;
        for(i=1;i<=n;i++)
        {
            sum = sum+ara[i]*ara[i];
        }
        printf("%lld\n",sum);



    }











return 0;
}

