#include<bits/stdc++.h>
using namespace std;
int ara[120];
int main()
{
    int n,a,b,i,j,x,y,sum,sub,c,k,d;

    while(scanf("%d %d",&n,&k)==2)
    {
        sum = 0;
        sub = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]==1)sum++;
            else sub++;
        }
        a = sum;
        b = sub;
        int ma = -99;
        for(i=1;i<=n;i++)
        {
            a = sum;
            d = sub;
            b = i;
            for(j = -n;j<=n;j++)
            {
                c = b+j*k;
                if(c>=1&&c<=n)
                {
                    if(ara[c]==1)
                    {
                        a--;
                    }
                    else{
                        d--;
                    }
                }
            }
            x = abs(a-d);
            ma = max(ma,x);
        }

        printf("%d\n",ma);


    }






return 0;
}

