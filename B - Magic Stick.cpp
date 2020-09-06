#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<int>s;
bool bfs(ll n,ll m)
{
    ll sum =  0;
    queue<int>q;
    q.push(n);
 
    while(!q.empty())
    {
        ll x;
        ll a = q.front();
        if(s.size()>10)return true;
       // printf("%lld\n",a);
        if (a>=m)
            return true;
        q.pop();
 
        if(a%2==0)
        {
            x = (a*3)/2;
            if(s.find(x)==s.end())
            {
                s.insert(x);
                q.push(x);
            }
            x = a-1;
            if(x>1&&s.find(x)==s.end())
            {
                s.insert(x);
                q.push(x);
            }
        }
        else
        {
            x = a-1;
            if(x>1&&s.find(x)==s.end())
            {
                s.insert(x);
                q.push(x);
            }
        }
    }
    return false;
}
int main()
{
    ll t,n,m,a,b,i,j,x,y;
 
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        s.clear();
        if(n==m)
        {
            printf("YES\n");
        }
        else if(n<m&&n==1)
        {
            printf("NO\n");
        }
        else
        {
            if(bfs(n,m))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}