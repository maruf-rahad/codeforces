#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v[100010];
ll visited[100010];
ll ara[100010];
ll x;


void zero(ll n)
{
    for(ll i=0;i<=n+5;i++)
    {
        visited[i] = 0;
        v[i].clear();
    }
}
void dfs(ll u)
{
    visited[u] = 1;
    x  = min(x,ara[u]);
    for(ll i=0;i<v[u].size();i++)
    {
        int b = v[u][i];
        if(visited[b]==0)
        {
            dfs(b);
        }
    }
}
int main()
{
    ll n,m,a,b,i,j,sum;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        zero(n);

        for(i=1;i<=n;i++)scanf("%lld",&ara[i]);

        for(i=1;i<=m;i++)
        {
            scanf("%lld %lld",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }

        sum = 0;
        for(i=1;i<=n;i++)
        {
            x = 1e18;
            if(visited[i]==0)
            {
                dfs(i);
                sum+=x;
            }
        }

        printf("%lld\n",sum);
    }









    return 0;
}
