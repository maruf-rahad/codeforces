#include<bits/stdc++.h>
using namespace std;
int ara[9999];
int ara2[9999];
int ara3[9999];
int main()
{
    int a,b,i,j,x,y,n,t,sum = 0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<=n+10;i++)ara2[i] = 0;
        for(i=0;i<=n+10;i++)ara3[i] = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);;
            ara2[i] = ara2[i-1]+ara[i];
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j>i)
                {
                    x = ara2[j]-ara2[i-1];
                    if(x<=8000)
                    {
                        ara3[x] = 1;
                    }
                }
            }
        }
        sum = 0;
        for(i=1;i<=n;i++)
        {
            if(ara3[ara[i]])
            {
                sum++;
            }
        }

        printf("%d\n",sum);


    }















return 0;
}
