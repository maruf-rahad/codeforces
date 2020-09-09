#include<bits/stdc++.h>
using namespace std;
vector<int>v[10010];
int visited[10010];
int level[10010];
int color[10010];
int n,sum;

void zero()
{
    for(int i=0;i<n+2;i++)
    {
        v[i].clear();
        visited[i] = 0;
        level[i] = 0;
        color[i] = 0;
    }

}
void dfs(int a)
{
    int x;
    visited[a] = 1;

   // printf("visit : %d\n",a);

    for(int i = 0;i<v[a].size();i++)
    {
         x = v[a][i];

        if(visited[x]==0)
        {
            dfs(x);
           if(color[x]!=color[a])
           {
               sum++;
           }



        }
    }






}


int main()
{
    int a,b,i,j,x,y;

    while(scanf("%d",&n)==1)
    {
        zero();
        sum = 0;


        for(i=1;i<n;i++)
        {
            scanf("%d",&a);
            v[i+1].push_back(a);
            v[a].push_back(i+1);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&color[i]);
        }


        dfs(1);


        printf("%d\n",sum+1);





    }








return 0;
}

