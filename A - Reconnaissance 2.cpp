#include<bits/stdc++.h>
using  namespace std;
int ara[1006];
int main()
{
    int n,a,b,i,j,x,y;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        ara[n+1] = ara[1];
        int ma  = 999999;
        for(i=2;i<=n+1;i++)
        {
            a = abs(ara[i]-ara[i-1]);
            if(a<ma)
            {
                ma = a;
                x = i;
                y = i-1;
            }
        }
        if(x==n+1)x = 1;

        printf("%d %d\n",x,y);
    }







return 0;
}

