#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,b,n,m,x,y,sum,i,j;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);

        if(a*2<=b)
        {
            printf("%lld\n",(x+y)*a);
        }
        else{
            sum = (max(x,y)-min(x,y))*a+(min(x,y)*b);
            printf("%lld\n",sum);
        }
    }









return 0;
}
