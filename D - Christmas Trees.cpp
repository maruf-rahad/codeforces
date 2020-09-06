#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[200010];
map<ll,ll>mp;
map<ll,ll>mp2;
map<ll,ll> :: iterator it;
queue<ll>q;

ll bfs(ll m)
{
    ll a,b,sum,dis;
    sum = 0;
    dis = 0;
    while(sum<m)
    {
        a = q.front();
        b = mp[a];
        q.pop();

        if(mp.find(a+1)==mp.end())
        {
            dis+=abs(b-(a+1));
            q.push(a+1);
            sum++;
            mp[a+1] = b;
            mp2[a+1] = 1;
        }
        if(sum<m&&mp.find(a-1)==mp.end())
        {
            dis+=abs(b-(a-1));
            q.push(a-1);
            sum++;
            mp[a-1] = b;
            mp2[a-1] = 1;
        }
    }
    return dis;

}
int main()
{
    ll n,m,a,b,i,j,y,flag,sum;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        sum = q.size();

        while(sum>0)
        {
            q.pop();
            sum--;
        }
        mp.clear();
        mp2.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            mp[a] = a;
            q.push(a);
        }
        printf("%lld\n",bfs(m));

        for(it = mp2.begin();it!=mp2.end();it++)
        {
            cout<<it->first<<" ";
        }
        cout<<endl;




    }










return 0;
}

