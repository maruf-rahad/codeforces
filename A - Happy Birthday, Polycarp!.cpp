#include<bits/stdc++.h>
using namespace std;
#define mx = 1e10+5
#define ll long long

vector<ll>v;
void make()
{
    ll i,j,sum;

    for(i=1;i<=9;i++)
    {
        sum = 0;
        for(j=1;j<=9;j++)
        {
            sum = sum*10+i;
            v.push_back(sum);
        }
    }
}
int main()
{
    make();
    sort(v.begin(),v.end());

    ll i,sum,t,n;
    while(scanf("%lld",&t)==1)
    {
        while(t--)
        {
            sum = 0;
            scanf("%lld",&n);

            for(i=0;i<v.size();i++)
            {
                if(v[i]<=n)
                {
                    sum++;
                }
            }
            printf("%lld\n",sum);
        }
    }







return 0;
}

