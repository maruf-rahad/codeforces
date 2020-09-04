#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t,n,m,a,c,b,i,j,x,y;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a>=c)
            printf("-1 ");
        else printf("%lld ",1LL);

        if(a*b<=c)
        {
            printf("-1\n");
        }
        else{
            printf("%lld\n",b);
        }
    }











return 0;
}
