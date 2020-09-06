#include<bits/stdc++.h>
using namespace std;
char ch[505][505];
int visited[505][505];
int n,m,k,sum,dot;
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};

void zero()
{
    int i,j;
    for(i=0; i<=n+2; i++)
    {
        for(j=0; j<=m+2; j++)
        {
            visited[i][j] = 0;
        }
    }
}

void dfs(int x,int y)
{
    visited[x][y] = 1;
    dot++;

    for(int i=0; i<4; i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];

        if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&visited[xx][yy]==0&&ch[xx][yy]=='.'&&dot<sum-k)
        {
            dfs(xx,yy);
        }
    }






}
int main()
{
    int i,j,x,y,flag;

    while(scanf("%d %d %d",&n,&m,&k)==3)
    {
        zero();
        flag = 0;
        sum = 0;
        getchar();
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='.')
                {
                    sum++;
                    if(flag==0)
                    {
                        x = i;
                        y = j;
                        flag = 1;
                    }
                }

                if(ch[i][j]=='#')
                {
                    visited[i][j] = 3;
                }

            }
            getchar();
        }
        dot = 0;
        dfs(x,y);

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(visited[i][j]==3)
                {
                    printf("#");
                }
                else if(visited[i][j]==1)
                {
                    printf(".");
                }
                else if(visited[i][j]==0)
                {
                    printf("X");
                }

            }

            printf("\n");

        }




    }









    return 0;
}

