#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a,b,i,j,x,y,sum,flag,n,m,c;
    while(scanf("%lld",&n)==1)
    {
        while(n--)
        {


            scanf("%lld %lld %lld",&a,&b,&c);

            if(a<=b&&a<=c)
            {
                sum = a;
            }
            else if(b<=a&&b<=c)
            {
                sum = b;
            }
            else{
                sum = c;
                a-=sum;
                b-=sum;

                sum += min(min(a,b),(a+b)/3);
            }



             printf("%lld\n",sum);
        }

    }










    return 0;
}
