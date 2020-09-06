#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
ll ara[100005];
ll ara2[100005];
int main()
{
    ll n,m,t,a,b,i,j,x,y,sum,flag,flag2,cnt,mx;
    string s,s2;
    char ch;
    scanf("%lld",&t);

    while(t--)
    {
        mp.clear();
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            mp[ara[i]] = i;
        }
        for(i=1;i<=m;i++)
        {
            scanf("%lld",&ara2[i]);
        }
        mx = -1;
        cnt = 0;
        sum = 0;
        for(i=1;i<=m;i++)
        {
            a = ara2[i];
            x = mp[a]-cnt;
            if(x<mx)
            {
                mx--;
                cnt++;
                sum++;
                continue;
            }
            if(x>mx)
            {
                mx = x;
            }

            sum+=x+x-1;
            cnt++;
            mx--;
        }

        printf("%lld\n",sum);
    }










return 0;
}

