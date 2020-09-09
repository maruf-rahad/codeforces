#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[20000];
    long long n,i,j,a,b;
    while(scanf("%lld",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(ara[i]%2==0)
            {
                printf("%lld ",ara[i]-1);
            }
            else{
                printf("%lld ",ara[i]);
            }
        }
        printf("\n");

    }




return 0;
}

