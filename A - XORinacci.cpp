#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,b,c,d,i,j,x,n;

    while(scanf("%lld",&t)==1)
    {

        while(t--)
        {
            scanf("%lld %lld %lld",&a,&b,&n);

            if(n%3==0)
            {
                printf("%lld\n",a);
            }
            else if(n%3==1)
            {
                printf("%lld\n",b);
            }
            else if(n%3==2)
            {
                printf("%lld\n",a^b);
            }

        }

    }










    return 0;
}

