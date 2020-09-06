#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
map<ll,ll>mp2;
map<ll,ll> :: iterator it;
vector<ll>v;
int main()
{
    ll t,n,m,a,b,i,j,sum,flag,flag2,x,y;

    scanf("%lld",&t);
    while(t--)
    {
        mp.clear();
        mp2.clear();
        scanf("%lld %lld",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            mp[a]++;
        }
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            mp2[a]++;
        }

        flag = 0;
        flag2 = 0;
        x = -9;
        sum = 0;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            a = it->first;

            if(mp2.find(a)==mp2.end())
            {
                //printf("oiehf\n");
                if(mp[a]>1)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    x = a;
                    sum++;
                    if(sum>1)
                    {
                        flag = 1;
                        break;
                    }
                }

            }
            else
            {
                if(mp[a]>mp2[a])
                {
                    x = a;
                    sum+=mp[a]-mp2[a];
                }

                if(sum>1)
                {
                    flag = 1;
                    break;
                }
            }

        }

      //  printf("%lld\n",x);

        if(flag==1)
        {
            printf("NO\n");
            continue;
        }
        else if(x==-9)
        {
            printf("YES\n");
            continue;
        }
        else
        {


            sum  = 0;
            y = -9;
            for(it = mp2.begin(); it!=mp2.end(); it++)
            {
                a = it->first;
                if(mp.find(a)==mp.end())
                {
                    if(mp2[a]>1)
                    {
                        flag2 = 1;
                        break;
                    }
                    else
                    {
                        y = a;
                        sum++;
                        if(sum>1)
                        {
                            flag2 = 1;
                            break;
                        }
                    }

                }
                else
                {
                    if(mp2[a]>mp[a])
                    {
                        y = a;
                        sum+=mp2[a]-mp[a];
                    }

                    if(sum>1)
                    {
                        flag2 = 1;
                        break;
                    }
                }

            }
        }

        if(flag2==1)
        {
            printf("NO\n");
            continue;
        }
        else if(y==-9)
        {
            printf("YES\n");
             continue;
        }
        else if(abs(x-y)<=m)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
