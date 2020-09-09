#include<bits/stdc++.h>
using namespace std;
int ara[55][55];
int ara2[55][55];
int main()
{
    int n,m,a,b,i,j;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&ara2[i][j]);
            }
        }



        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                a = min(ara[i][j],ara2[i][j]);
                b = max(ara[i][j],ara2[i][j]);
                ara[i][j] = a;
                ara2[i][j] = b;
            }
        }


        int flag = 0;

        for(i=1; i<=n; i++)
        {
            for(j=2; j<=m; j++)
            {
                if(ara[i][j]<=ara[i][j-1])
                {
                    flag = 1;
                }
            }
        }
        for(i=2; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(ara[i][j]<=ara[i-1][j])
                {
                    flag = 1;
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=2; j<=m; j++)
            {
                if(ara2[i][j]<=ara2[i][j-1])
                {
                    flag = 1;
                }
            }
        }
        for(i=2; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(ara2[i][j]<=ara2[i-1][j])
                {
                    flag = 1;
                }
            }
        }
        if(flag==1)
        {
            printf("Impossible\n");
        }
        else
        {
            printf("Possible\n");
        }

    }







    return 0;
}

