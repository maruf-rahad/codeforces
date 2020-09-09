#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
int main()
{
    ll n,m,i,x,t,y,sum,tot,z;

   while(scanf("%lld",&t)==1)
   {

       while(t--)
       {
           v.clear();
            sum = 0;
           scanf("%lld %lld",&n,&m);
           x = m%10;
           y = m%10;
           for(i=1;i<=10;i++)
           {
               sum += (y%10);
               y+=x;
           }

           tot = sum*((n/m)/10);
           //printf("%lld %lld %lld %lld\n",sum,n,m,n/m,tot);
           z = (n/m)%10;
           x = m%10;
           y = m%10;
           for(i=1;i<=z;i++)
           {
               tot+=(y%10);

               y+=x;
           }
           printf("%lld\n",tot);



       }



   }








return 0;
}

