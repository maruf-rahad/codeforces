#include<bits/stdc++.h>
using namespace std;
int visited[55][55];
char ch[55][55];
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};
int n;
void zero()
{
    int i,j;
    for(i=0; i<=n+2; i++)
    {
        for(j=0; j<=n+2; j++)
        {
            visited[i][j] = 0;
        }
    }
}
void dfs()
{
    int i,j,k,x,y;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            x = i;
            y = j;
            if(visited[x][y]==0)
            {
                int sum = 0;
                //    printf("yes %d %d\n",x,y);

                for(k=0; k<4; k++)
                {
                    int xx = x+r[k];
                    int yy = y+c[k];
                    if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&ch[xx][yy]=='.'&&visited[xx][yy]==0)
                    {
                        sum++;
                    }
                }
                if(sum==4)
                {
                    //printf("x,y  = %d %d\n",x,y);
                    visited[x][y] = 1;
                    //  printf("yessss %d %d\n",x,y);
                    for(k=0; k<4; k++)
                    {
                        int xx = x+r[k];
                        int yy = y+c[k];
                        visited[xx][yy] = 1;

                    }
                    /*for(int w=1; w<=n; w++)
                    {
                        for(int l=1; l<=n; l++)
                        {
                            printf("%d",visited[w][l]);
                        }
                        printf("\n");
                    }
                    printf("\n\n");
                    */

                }

            }

        }
    }



}
int main()
{
    int i,j,x,y;
    while(scanf("%d",&n)==1)
    {
        getchar();
        zero();

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='#')
                {
                    visited[i][j] = 1;
                }
            }
            getchar();
        }
        /* for(i=1;i<=n;i++)
         {
             for(j=1;j<=n;j++)
             {
                 printf("%c",ch[i][j]);
             }
             printf("\n");
         }*/

        dfs();
        int flag = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(visited[i][j]==0)
                {
                    flag = 1;
                    break;
                }
            }
        }


        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }











    return 0;
}

