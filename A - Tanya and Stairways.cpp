#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,x;
    int ara[10020];
    while(scanf("%d",&n)==1)
    {
        x = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=2;i<=n;i++)
        {
            if(ara[i]==1)
            {
                x++;
            }
        }
        int flag = 0;
        printf("%d\n",x+1);
        for(i=2;i<=n;i++)
        {
            if(ara[i]==1)
            {
                printf("%d",ara[i-1]);
                x = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
        for(j=x+1;j<=n;j++)
        {
            if(ara[j]==1)
            {
                printf(" %d",ara[j-1]);
            }
        }
        printf(" %d\n",ara[n]);
        }
        else{
            printf("%d\n",ara[n]);
        }
    }









return 0;
}

