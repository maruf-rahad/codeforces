#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mxx 200010

vector<pair<int,int> >G[mxx+10];
vector<pair<int,pair<int,pair<int,int> > > >v;
vector<pair<int,pair<int,int> > >v2;
int parent[mxx+10];
int level[mxx+10];
int par[mxx+10];
int visited[mxx+10];
int vis[mxx+10];

struct node
{
    int par;
    int maxi;
};
node sparse[mxx+10][25];

void make(int n,int m)
{
    v.clear();
    for(int i=0; i<=n+10; i++)
    {
        G[i].clear();
        visited[i] = 0;
        parent[i] = 0;
        par[i] = i;
        level[i] = 0;
        vis[i] = 0;

        for(int j=0; j<=m+2; j++)
        {
            sparse[i][j].par = -1;
            sparse[i][j].maxi = -1;
        }
    }

}

int findParent(int a)
{
    if(a==par[a])
        return a;

    par[a] = findParent(par[a]);
    return par[a];
}

ll spanningTree(int n,int m)
{
    int i,j,a,b,d,c,x,y;
    ll sum = 0;
    for(int i=0; i<m; i++)
    {
        a = v[i].S.F;
        b = v[i].S.S.F;
        c = v[i].F;
        d = v[i].S.S.S;

        x = findParent(a);
        y = findParent(b);

        if(x!=y)
        {
            par[y] = x;
            G[a].push_back({b,c});
            G[b].push_back({a,c});
            sum+=c;
            vis[d] = 1;
        }
    }

    return sum;
}

void bfs(int u)
{
    visited[u] = 1;
    level[u] = 0;
    parent[u] - 1;
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int vv = G[u][i].F;
            int c = G[u][i].S;

            if(visited[vv]==0)
            {
                visited[vv]=1;
                parent[vv] = u;
                level[vv] = level[u]+1;
                sparse[vv][0].par = u;
                sparse[vv][0].maxi = c;
                q.push(vv);
            }
        }
    }
}

void lcaInit(int n,int m)
{
    int i,j;
    for(j=1;(1<<j)<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(sparse[i][j-1].par!=-1)
            {
                sparse[i][j].par = sparse[sparse[i][j-1].par][j-1].par;
                sparse[i][j].maxi = max(sparse[i][j-1].maxi,sparse[sparse[i][j-1].par][j-1].maxi);
            }
        }
    }
}
int lcaQuery(int p,int q)
{
    if(level[p]<level[q])
    {
        int temp = p;
        p = q;
        q = temp;
    }
    int log = 1;
    while((1<<log)<level[p])
    {
        log++;
    }

    int mx = -1;

    for(int i=log;i>=0;i--)
    {
        if(level[p]-(1<<i)>=level[q])
        {
            mx = max(mx,sparse[p][i].maxi);
            p = sparse[p][i].par;
        }
    }
    if(p==q)return mx;

    for(int i=log;i>=0;i--)
    {
        if(sparse[p][i].par!=-1&&sparse[p][i].par!=sparse[q][i].par)
        {
            mx = max(mx,max(sparse[p][i].maxi,sparse[q][i].maxi));
            p = sparse[p][i].par;
            q = sparse[q][i].par;
        }
    }
    return max(mx,max(sparse[p][0].maxi,sparse[q][0].maxi));
}
int main()
{
    int n,m,a,b,c,i,j,y;
    ll x;
    while(scanf("%d %d",&n,&m)==2)
    {
        make(n,log(n)+1);

        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back({c,{a,{b,i}}});
            v2.push_back({c,{a,b}});
        }
        sort(v.begin(),v.end());
       x =  spanningTree(n,m);
        bfs(1);
        lcaInit(n,m);

        for(i=1;i<=m;i++)
        {
            if(vis[i]==1)
            {
                printf("%lld\n",x);
            }
            else{
                    ll yy = x-lcaQuery(v2[i-1].S.F,v2[i-1].S.S)+v2[i-1].F;
               printf("%lld\n",yy);
            }
        }
    }














    return 0;
}
