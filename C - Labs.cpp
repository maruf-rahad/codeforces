#include<bits/stdc++.h>
using namespace std;
int ara[305][305];
int main()
{
    int n,m,a,b,i,j,x,y,flag = 0;

    while(scanf("%d",&n)==1)
    {
        x = 0;
        flag = 0;
        for(i=1; i<=n; i++)
        {
            if(flag==0)
            {
                for(j=1; j<=n; j++)
                {
                    ara[j][i] = ++x;
                 //   printf("%d %d %d    %d\n",i,j,x,flag);
                }
                flag = 1;
            }
            else if(flag==1)
            {
                for(j=n;j>=1;j--)
                {
                    ara[j][i] = ++x;
                   //  printf("%d %d %d    %d\n",i,j,x,flag);
                }
                flag = 0;
            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d ",ara[i][j]);
            }
            printf("\n\n");
        }
    }












    return 0;
}

