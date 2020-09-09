#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,sum,n,m;

    while(scanf("%lld %lld",&n,&m)==2)
    {
         sum = 0;
        b = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            sum = (b+a)/m;
            printf("%lld ",sum);
             b = (a+b)%m;

        }
        printf("\n");
    }


return 0;
}

