#include<bits/stdc++.h>
using namespace std;
long long ara[300000];
long long ara2[300000];

int main()
{
    long long n,a,b,i,j,sum;
    map < long long , pair<long long ,long long> >mp;

    map < long long, pair<long long ,long long> > :: iterator it;

    while(scanf("%lld",&n)==1)
    {
        mp.clear();

        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            ara2[i] = ara[i];
        }


        for(i=2;i<=n;i++)
        {
            ara[i]=ara[i]+ara[i-1];
        }

          for(i=n-1;i>=1;i--)
        {
            ara2[i]=ara2[i]+ara2[i+1];
        }
        for(i=1;i<=n;i++)
        {
            a =ara[i];
            mp[a].first = 1;
            mp[a].second = i;
        }

        for(i=n;i>=1;i--)
        {
            a = ara2[i];

            if(mp.find(a)!=mp.end()&&mp[a].second<i)
            {
                mp[a].first = mp[a].first+1;
            }
        }
        a = -10;
        b = -10;


        for(it = mp.begin();it!=mp.end();it++)
        {
            if(it->second.first>=a)
            {
                a = it->second.first;
                b = it->first;
            }
        }

        if(a==1)
        {
            printf("0\n");
        }
        else{
            printf("%lld\n",b);
        }

    }

return 0;
}

