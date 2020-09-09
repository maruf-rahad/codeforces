#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,sum,n,m,c,x,y;

    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);


        if(c%2==0)
        {
            x = c/2;
        }
        else {
            x = c/2 +1;
        }
        sum = x*a-(c-x)*b;

        printf("%lld\n",sum);
    }







return 0;
}

