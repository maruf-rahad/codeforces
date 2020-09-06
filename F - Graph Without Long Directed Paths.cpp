#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int>mp;
vector<int>G[200010];
vector<pair<int,int> >vv;
int visited[200010];
int flag;

zero(int n)
{
    vv.clear();
    mp.clear();
    for(int i=0; i<=n+8; i++)
    {
        G[i].clear();
        visited[i] = -1;
    }
}

void dfs(int u,int c)
{
    if(flag==1)
        return;
    visited[u] = c;
    for(int i=0; i<G[u].size(); i++)
    {
        int v = G[u][i];
        if(visited[v]==-1)
        {
            dfs(v,!c);
        }
        else if(visited[u]==visited[v])
        {
            //printf("%d %d\n",u,v);
            flag = 1;
            return;
        }
    }
}
int main()
{
    int n,m,a,b,i,j,x,y;
    pair<int,int>z;
    while(scanf("%d %d",&n,&m)==2)
    {
        zero(n);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
            vv.push_back(make_pair(a,b));
        }
        flag = 0;
        dfs(1,0);
        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

            for (int i = 0; i < m; ++i)
            {
                cout << (visited[vv[i].first] < visited[vv[i].second]);
            }

            printf("\n");
        }
    }










    return 0;
}
