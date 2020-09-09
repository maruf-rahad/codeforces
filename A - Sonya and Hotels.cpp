#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[200];
    long long n,a,b,i,j,d,sum;
    while(scanf("%lld %lld",&n,&d)==2)
    {
        sum = 0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ara[i]);
        }

        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if((ara[i]-ara[i-1])>2*d)
            {
                sum+=2;

            }
            else if((ara[i]-ara[i-1])==2*d)
            {
                sum++;

            }

        }
        printf("%lld\n",sum+2);
    }


return 0;
}

