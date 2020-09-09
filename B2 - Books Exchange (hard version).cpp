#include<bits/stdc++.h>
using namespace std;
int visited[222222];
int ara[222222];
int cnt[222222];
int sum,i;
void dfs(int u)
{
    visited[u] = 1;
    sum++;

    int v = ara[u];
    if(u==v||visited[v]==1)
    {
        cnt[u] = sum;

        return;
    }
    if(visited[v]==0)
    {
        dfs(v);
        cnt[u] = sum;

    }

}


int main()
{
    int n,m,a,b,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        memset(visited,0,sizeof(visited));
        memset(cnt,0,sizeof(cnt));

        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }


        for(i=1;i<=n;i++)
        {
            sum = 0;
            if(visited[i]==0)
            {
                dfs(i);

            }
        }
        for(i=1;i<=n;i++)
        {
            printf("%d ",cnt[i]);
        }
        printf("\n");
    }












return 0;
}

