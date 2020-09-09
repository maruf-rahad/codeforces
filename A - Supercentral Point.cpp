#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[210];
    int ara2[210];

    int n,a,b,i,j,x,y,flag,flag2,flag3,flag4,sum;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&ara[i],&ara2[i]);
        }

        sum = 0;

        for(i=1;i<=n;i++)
        {
            flag = 0,flag2 = 0,flag3 = 0,flag4 = 0;
            a = ara[i];
            b = ara2[i];
            for(j=1;j<=n;j++)
            {
                if(i==j)continue;

                if(ara[j]>a&&ara2[j]==b)flag = 1;
                if(ara[j]<a&&ara2[j]==b)flag2 = 1;
                if(ara[j]==a&&ara2[j]<b)flag3 = 1;
                if(ara[j]==a&&ara2[j]>b)flag4 = 1;

            }

            if(flag==1&&flag2==1&&flag3==1&&flag4==1)
            {
                sum++;
            }

        }

        printf("%d\n",sum);

    }

    return 0;
}

