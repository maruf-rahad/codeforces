#include<bits/stdc++.h>
using namespace std;
vector<int>v[250005];
int visited[250005];
int n,m,x,y;

void zero()
{
    for(int i = 0; i <=n+2;i++)
    {
        visited[i] = 0;
        v[i].clear();
    }
}

void bipartite(int u)
{
    if(visited[u]==1)
    {
        x++;
    }
    else if(visited[u]==2)
    {
        y++;
    }

    for(int i=0;i<v[u].size();i++)
    {
        int a = v[u][i];
        if(visited[a]==0&&visited[u]==1)
        {
            visited[a] = 2;
            bipartite(a);
        }
        else if(visited[a]==0&&visited[u]==2)
        {
            visited[a] = 1;
            bipartite(a);
        }
    }



}
int main()
{
    int i,a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        zero();
        for(i = 1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        visited[1] = 1;
        x = 0;
        y = 0;
        bipartite(1);
      //  printf("yes\n");

        printf("%d\n",min(x,y));
        if(x<=y)
        {
            for(i=1;i<=n;i++)
            {
                if(visited[i]==1)
                {
                    printf("%d ",i);
                }
            }
        }
        else{
            for(i=1;i<=n;i++)
            {
                if(visited[i]==2)
                {
                    printf("%d ",i);
                }
            }
        }
        printf("\n");

    }









return 0;
}

