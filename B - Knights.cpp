#include<bits/stdc++.h>
using namespace std;
#define ll long long
int r[8] = {2,2,-2,-2,1,1,-1,-1};
int c[8] = {1,-1,1,-1,2,-2,2,-2};
char ch[105][105];
int visited[105][105];
int n ;

void zero()
{
    int i,j;
    for(i=1;i<=n+2;i++)
    {
        for(j=1;j<=n+2;j++)
        {
            visited[i][j] = 0;
        }
    }
}
void dfs(int x,int y,int flag)
{
    if(flag==1)
        visited[x][y] = 1;
    else visited[x][y] = 2;

    for(int i=0;i<8;i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];
        if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&visited[xx][yy]==0)
        {
            if(flag==1)
            {
                dfs(xx,yy,2);
            }
            else{
                dfs(xx,yy,1);
            }
        }
    }

}

int main()
{
    int a,b,i,j,x,y,sum,flag,m;
    while(scanf("%d",&n)==1)
    {
        zero();
        dfs(1,1,1);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(visited[i][j]==1)
                {
                    printf("W");
                }
                else{
                    printf("B");
                }
            }
            printf("\n");
        }
    }









return 0;
}

