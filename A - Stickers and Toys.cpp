#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,x,y,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&a,&b);
        x = n-a;
        y = n-b;
        x = max(x,y);

        printf("%lld\n",x+1);
    }







return 0;
}

