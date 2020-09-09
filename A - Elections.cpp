#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,i,j,m;

    while(scanf("%d",&n)==1)
    {
        int ara[n+1];
        int sum = 0;int ma = -5;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            sum = sum+ara[i];
            if(ara[i]>ma)
            {
                ma = ara[i];
            }
        }
        a = sum*2+1;

       // printf("%d %d %d\n",sum,ma,a);
        if(a%n==0)
        {
            a = a/n;
        }
        else{
            a = (a/n)+1;
        }

        b = max(a,ma);

        printf("%d\n",b);



    }








return 0;
}

