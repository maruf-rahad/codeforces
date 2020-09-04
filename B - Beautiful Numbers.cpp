#include<bits/stdc++.h>
using namespace std;
int ara[222222];
int main()
{

    int n,m,a,b,i,j,x,y,t,mx,mn;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            ara[a] = i;
        }
        mn = 1e9;
        mx = -9;
        for(i=1;i<=n;i++)
        {
            mn = min(mn,ara[i]);
            mx = max(mx,ara[i]);

            if(mx-mn+1==i)printf("%d",1);
            else printf("0");
        }
        printf("\n");


    }












return 0;
}
