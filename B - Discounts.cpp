#include<bits/stdc++.h>
using namespace std;
long long ara[300005];

int main()
{
    long long n,a,b,i,j,x,y,t,sum,m;

    while(scanf("%lld",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }
        sort(ara+1,ara+n+1);

        for(i=2;i<=n;i++)
        {
            ara[i] = ara[i-1]+ara[i];

        }
        scanf("%lld",&t);

        while(t--)
        {
            scanf("%lld",&m);

            sum = ara[n]-ara[n-m+1]+ara[n-m];

            printf("%lld\n",sum);
        }

    }











return 0;
}

