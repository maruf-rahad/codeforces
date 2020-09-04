#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[222222];
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        mx = -1;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            mx = max(mx,ara[i]);
        }
        if(m%2==1)
        {
            m = 1;
        }
        else
        {
            m = 2;
        }
        for(i=1;i<=m;i++)
        {
            mx = *max_element(ara+1,ara+n+1);
            for(j=1;j<=n;j++)
                ara[j] = mx - ara[j];
        }

        for(i=1;i<=n;i++)
        {
            printf("%lld ",ara[i]);
        }
        printf("\n");

    }















return 0;
}
