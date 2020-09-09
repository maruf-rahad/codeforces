#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[120];
    int n,m,a,b,i,j;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0;i<110;i++)
        {
            ara[i] = 0;
        }


        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
            for(j = a;j<=b; j++)
            {
                ara[j] = 1;
            }
        }
        int sum = 0;
        for(i=1;i<=m;i++)
        {
            if(ara[i]==0)
            {
                sum++;
            }
        }
        printf("%d\n",sum);
        for(i=1;i<=m;i++)
        {
            if(ara[i]==0)
            printf("%d ",i);

        }
        printf("\n");
    }










}

