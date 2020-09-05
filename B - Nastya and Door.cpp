#include<bits/stdc++.h>
using namespace std;
int ara[222222];
int ara2[222222];
int ara3[222222];

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,k;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<=n+10;i++)
        {
            ara2[i] = 0;
            ara3[i] = 0;
        }
        for(i=1;i<=n;i++)scanf("%d",&ara[i]);

        for(i=2;i<n;i++)
        {
            if(ara[i]>ara[i-1]&&ara[i]>ara[i+1])
            {
                ara2[i] = 1;
            }
            ara3[i] = ara2[i]+ara3[i-1];
        }
        ara3[n] = ara3[n-1];
        mx = 0;
        a = 1;
        for(i=1;i<=n-k+1;i++)
        {
            int sum = ara3[i+k-1]-ara3[i];
            if(ara2[i+k-1]==1)
            {
                sum--;
            }
            if(sum>mx)
            {
                mx = sum;
                a = i;
            }
        }

        printf("%d %d\n",mx+1,a);







    }










return 0;
}
