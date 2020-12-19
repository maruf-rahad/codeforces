#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n,m,a,b,i,j,t,s,mx,x,y,sum,sum2;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        s = sqrt(n);

        mx = n-1;
        x = 1;
        y = n-1;
        for(i=2;i<=s;i++)
        {
            if(n%i==0)
            {
                a = i;
                b = n/i;

                sum = (b-1)*a;
                sum2 = (a-1)*b;

                if(sum<mx)
                {
                    x = a;
                    y = (b-1)*a;
                    mx = sum;
                }
                if(sum2<mx)
                {
                    x = b;
                    y = (a-1)*b;
                    mx = sum2;
                }
            }
        }

        printf("%lld %lld\n",x,y);



    }














    return 0;
}
