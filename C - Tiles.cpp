#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long sum,n,m,a,b,i,j,mod;

    mod = 998244353;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        n = n+m;
        sum = 1;
        for(i=1;i<=n;i++)
        {
            sum = (sum*2)%mod;
        }

        printf("%lld\n",sum);



    }







return 0;
}

