#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,flag,m;
    int ara[200];
    int ara2[200];

    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d",&ara2[i]);
        }
        sort(ara+1,ara+n+1);
        flag = 0;

        ara[1] = ara[1]*2;
        a = *max_element(ara+1,ara+n+1);

        for(i=1;i<=m;i++)
        {
            if(ara2[i]<=a)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d\n",a);
        }
        else{
            printf("-1\n");
        }

    }









return 0;
}

