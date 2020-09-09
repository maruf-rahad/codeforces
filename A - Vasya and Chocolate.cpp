#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,x,y,taka,i;
    scanf("%lld",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld %lld",&taka,&a,&b,&c);
        x = taka/c;

        y = (x/a)*b;


        x = x+y;
        printf("%lld\n",x);
    }


return 0;
}

