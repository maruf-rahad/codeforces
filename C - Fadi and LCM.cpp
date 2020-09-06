#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n)
{
    for(ll i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
}


int main()
{
    char ch;
    string s,s2;
    ll t,n,m,a,b,i,j,x,y,mx;

   while(scanf("%lld",&n)==1)
   {


       m = sqrt(n);
       mx = 1e18;
       x = 1;
       y = n;
       for(i=1;i<=m;i++)
       {
           a = __gcd(i,n/i);

           if(n==(i*(n/i))/a&&i!=n/i)
           {
               if(max(i,n/i)<mx)
               {
                   mx = max(i,n/i);
                   x = i;
                   y = n/i;
               }
           }
       }
       printf("%lld %lld\n",x,y);

   }









return 0;
}

