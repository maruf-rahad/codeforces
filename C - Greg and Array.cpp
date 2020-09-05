#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100010
#define F first
#define S second
vector<pair<int,pair<int,int> > >v;
vector<ll>v2;
ll ara[mx+10];
ll tree[mx*4+10];
ll lazy[mx*4+10];
void zero(ll n)
{
    for(ll i = 0; i<=n ; i++)
    {
        tree[i] = 0;
        lazy[i] = 0;
    }
}

void lazy11(ll node,ll b,ll e,ll i,ll j)
{
    if(b>j||e<i)
        return;

    if(b>=i&&e<=j)
    {
        lazy[node]++;
        return;
    }

    ll mid = (b+e)/2;

    lazy11(node*2,b,mid,i,j);
    lazy11(node*2+1,mid+1,e,i,j);
}

void findd(ll node,ll b,ll e,ll sum)
{
    if(b==e)
    {
        v2.push_back(sum+lazy[node]);
        return;
    }

    ll mid = (b+e)/2;

    findd(node*2,b,mid,sum+lazy[node]);
    findd(node*2+1,mid+1,e,sum+lazy[node]);
}

void  build(ll node, ll b,ll e,ll i,ll j,ll x)
{
    if(b>j||e<i)
        return ;
    if(b>=i&&e<=j)
    {
        tree[node]+= x ;
        return;
    }

    ll mid = (b+e)/2;

    build(node*2,b,mid,i,j,x);
    build(node*2+1,mid+1,e,i,j,x);
}

void query(ll node,ll b,ll e,ll sum)
{
   // printf("%lld %lld %lld %lld\n",node,b,e,sum);
    if(b==e)
    {
        printf("%lld ",sum+ara[b]+tree[node]);
        return;
    }
    ll mid = (b+e)/2;
    query(node*2,b,mid,sum+tree[node]);
    query(node*2+1,mid+1,e,sum+tree[node]);


}
int main()
{
    ll n,m,a,b,i,j,x,y,k,c;

    while(scanf("%lld %lld %lld",&n,&m,&k)==3)
    {
        zero(max(n,m)*4);
        v2.clear();
        v.clear();
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
        }
        for(i=1; i<=m; i++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            v.push_back({a,{b,c}});
        }
        for(i=1; i<=k; i++)
        {
            scanf("%lld %lld",&a,&b);
            lazy11(1,1,m,a,b);
        }


        findd(1,1,m,0);


        for(i=1; i<=m; i++)
        {
            build(1,1,n,v[i-1].F,v[i-1].S.F,v[i-1].S.S*v2[i-1]);
        }


            query(1,1,n,0);

            printf("\n");

    }




    return 0;
}
