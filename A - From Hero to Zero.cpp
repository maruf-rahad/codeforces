#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b,i,j,sum,t;

    while(scanf("%lld",&t)==1)
    {
        while(t--)
        {


        scanf("%lld %lld",&n,&m);
        sum = 0;
        while(n!=0)
        {
            a = n/m;
            if(a*m==n)
            {
                n = n/m;
                sum++;
            }
            else{
                a = n-a*m;
                n-=a;
                sum+=a;
            }
        }

        printf("%lld\n",sum);
        }


    }







return 0;
}
