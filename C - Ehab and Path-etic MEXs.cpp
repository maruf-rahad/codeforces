#include<bits/stdc++.h>
using namespace std;
vector<int>G[100010];
vector<pair<int,int> >G2;
int visited[100010];
map<pair<int,int>,int>mp;
map<pair<int,int>,int>:: iterator it;
int sum;
void zero(int n)
{
    mp.clear();
    for(int i=0;i<=n+5;i++)
    {
        G[i].clear();
        visited[i] = 0;
    }
}

void dfs(int u)
{
    visited[u] = 1;
    int flag = 0;
    for(int i=0;i<G[u].size();i++)
    {
        int v = G[u][i];
        if(G[v].size()==1)
        {
            if(mp.find({u,v})!=mp.end()&&mp[{u,v}]==-1)
            {
                mp[{u,v}] = sum++;
            }
            else if(mp[{v,u}]==-1){
                mp[{v,u}] = sum++;
            }
        }
        if(visited[v]==0)
        {
            flag = 1;
            dfs(v);
        }
    }
}
int main()
{

    int n,i,a,b;
    while(scanf("%d",&n)==1)
    {
        zero(n);
        G2.clear();
        for(i=1;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
            G2.push_back({a,b});
            mp[make_pair(a,b)] = -1;
        }
        sum = 0;
        dfs(1);

        for(it = mp.begin();it!=mp.end();it++)
        {
            if(it->second==-1)it->second = sum++;
        }

        int s = G2.size();
        for(i=0;i<s;i++)
        {
            cout<<mp[G2[i]]<<endl;
        }


    }













return 0;
}
