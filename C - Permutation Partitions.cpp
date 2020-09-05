#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
#define pp pair<ll,ll>
vector<pair<ll,ll> > v;
vector<ll> v2;
ll ara[222222];

bool cmp(pp a,pp b)
{
    if(a.first<b.first)return false;

    return true;
}
int main()
{
    ll t,n,m,a,b,i,j,x,y,sum,mul;
    string s;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        v.clear();
        v2.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            v.push_back({a,i});
        }
        sort(v.begin(),v.end(),cmp);
        sum = 0;
        mul = 1;
        for(i=0;i<m;i++)
        {
            sum+=v[i].first;
            v2.push_back(v[i].second);
        }
        sort(v2.begin(),v2.end());

       // for(i=0;i<v2.size();i++)printf("%lld ",v2[i]);

        for(i=1;i<m;i++)
        {
            mul =(mul*(abs(v2[i]-v2[i-1])))%998244353;
        }

        printf("%lld %lld\n",sum,mul)
;    }












return 0;
}
