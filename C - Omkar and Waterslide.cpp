#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[222222];
int main()
{
    ll n,m,t,a,b,i,j,x,y,sum,mx,mn,tmx,flag;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }
     sum = 0;
      for(i=1;i<n;i++)
      {
          if(ara[i]>ara[i+1])sum+=ara[i]-ara[i+1];
      }

      printf("%lld\n",sum);




    }














    return 0;
}
