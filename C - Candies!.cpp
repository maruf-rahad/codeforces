#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int main()
{
    int n,m,a,b,i,j,left,right,sum;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=2;i<=n;i++)
        {
            ara[i] = ara[i]+ara[i-1];
        }
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d %d",&a,&b);

            sum = ara[b]-ara[a-1];

            printf("%d\n",sum/10);
        }


    }





    return 0;
}

