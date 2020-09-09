#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,m;
    int ara[60][60];
    while(scanf("%d %d",&n,&m)==2)
    {

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        int flag = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if((ara[i][j]==1&&j==1)||(ara[i][j]==1&&j==m)||(ara[i][j]==1&&i==1)||(ara[i][j]==1&&i==n))
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)break;

        }
        if(flag==1)
        {
            printf("2\n");
        }
        else
        {
            printf("4\n");
        }

    }








    return 0;
}

