#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,flag,c,d,flag2;
    int ara[120];

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        a = *max_element(ara+1,ara+n+1);

        b = *min_element(ara+1,ara+n+1);

        c = abs(a-b);
        flag = 0;
        flag2 = 0;
        if(c%2==1)
        {
            for(i=1;i<=n;i++)
            {
                if(ara[i]!=a&&ara[i]!=b)
                {
                    flag = 1;
                }
            }
            if(flag==0)
            {
                flag2 = 1;
            }
        }
        else{
            d = (a+b)/2;
            for(i=1;i<=n;i++)
            {
                if(ara[i]!=a&&ara[i]!=b&&ara[i]!=d)
                {
                    flag = 1;
                }
            }
        }
        if(flag2==1)
        {
            printf("%d\n",abs(a-b));
        }
        else if(flag==1)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n",abs(d-a));
        }

    }










return 0;
}

