#include<bits/stdc++.h>
using namespace std;
#define mxx 200010
#define F first
#define S second
char Uplowch(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z')
        ch += 32;
    return ch;
}
char Lowupch(char ch)
{
    if(ch >= 'a' &&  ch <= 'z')
        ch -= 32;
    return ch;
}


vector<int>G[mxx+10];
vector<int>vv;

int cnt[mxx+10];
int visited[mxx+10];
int parent[mxx+10];
int mark[mxx+10];
int level[mxx+10];
int last[mxx+10];
void zero(int n)
{
    for(int i=0; i<=n+5; i++)
    {
        visited[i] = 0;
        parent[i] = 0;
        mark[i] = 0;
        level[i] = 0;
        G[i].clear();
        cnt[i] = 0;
        last[i] = 0;
    }
}

void dfs(int u,int dis)
{
    visited[u] = 1;
    level[u] = dis;
    for(int i=0; i<G[u].size(); i++)
    {
        int v = G[u][i];
        if(visited[v]==0)
        {
            parent[v] = u;
            dfs(v,dis+1);
            last[u]+=last[v]+1;
        }
    }
    vv.push_back(level[u]-last[u]);

}

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,k=0;

    while(scanf("%d %d",&n,&m)==2)
    {
        zero(n+1);
        vv.clear();
        for(i=1; i<n; i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
        }
        dfs(1,0);
        sort(vv.begin(),vv.end());
      long long   sum = 0;
        x = 0;
        for(i=vv.size()-1;i>=0;i--)
        {
            sum+=vv[i];
            x++;
            if(x==m)break;
        }
        printf("%lld\n",sum);




    }
























    return 0;
}
