#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,flag,t,sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        char ch[n+5][m+5];
        int ara[n+5][m+5];
        getchar();
        memset(ara,0,sizeof(ara));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }
        for(i=1;i<=n;i++)
        {
            sum = 0;
            for(j=1;j<=m;j++)
            {
                if(ch[i][j]=='*')
                {
                    sum++;
                }
            }
            for(j=1;j<=m;j++)
            {
                ara[i][j] = sum;
            }

        }
        for(i=1;i<=m;i++)
        {
            sum = 0;
            for(j=1;j<=n;j++)
            {
                if(ch[j][i]=='*')
                {
                    sum++;
                }
            }
            for(j=1;j<=n;j++)
            {
                ara[j][i] += sum;
            }
        }
        int mx = -9,total;
        flag = 0;
        int result = 10000000;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ara[i][j]>=mx)
                {
                    mx = ara[i][j];
                    if(ch[i][j]=='.')
                    {
                        total = n+m-ara[i][j]-1;
                    }
                    else{
                        total = n+m-ara[i][j];
                    }
                }
                if(total<result)
                {
                    result = total;
                }
            }
        }

        printf("%d\n",result);




    }








return 0;
}

