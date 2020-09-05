#include<bits/stdc++.h>
using namespace std;
#define mx 100010
vector<int>G[mx+10];
int visited[mx+10];
int ara[mx+10];
int deg[mx+10];
int flag;
void zero(int n)
{
    for(int i=0;i<=n+5;i++)
    {
        G[i].clear();
        visited[i] = 0;
        ara[i] = 0;
        deg[i] = 0;
    }
}
void dfs(int u,int dis)
{
    visited[u] = 1;
    for(int i=0;i<G[u].size();i++)
    {
        int v = G[u][i];
        if(visited[v]==0)
        {
            dfs(v,dis+1);
        }
    }
    if(deg[u]==1&&dis%2==1)
    {
        flag = 1;
    }
}
int main()
{
    int n,m,a,b,i,j,x,y;

    while(scanf("%d",&n)==1)
    {
        zero(n+1);

        for(i=1;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
            deg[a]++;
            deg[b]++;
        }
        flag = 0;
        for(i=1;i<=n;i++)
        {
            if(deg[i]==1)
            {
                dfs(i,0);
                break;
            }
        }

        for(i=1;i<=n;i++)
        {
            if(deg[i]==1)
            {
                ara[G[i][0]]++;
            }
        }
        int total = n-1;
        for(i=1;i<=n;i++)
        {
            if(ara[i]!=0)
                total = total-ara[i]+1;
        }
        if(flag==1)
        {
            printf("%d %d\n",3,total);
        }
        else
        {
            printf("%d %d\n",1,total);
        }
    }






return 0;
}
