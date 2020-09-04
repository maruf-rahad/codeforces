#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t,sum;
    int ara[222222];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=2;i<=n;i++)
        {
            if(ara[i]==ara[i-1])sum++;
        }

        if(sum==n-1)printf("%d\n",n);
        else printf("1\n");




    }

return 0;
}
