#include<bits/stdc++.h>
using namespace std;
vector<int>v[5010];
int visited[5010];
int level[5010];
void zero(int n)
{
    for(int i=0;i<=n+2;i++)
    {
        level[i] = 0;
        visited[i] = 0;
        v[i].clear();
    }
}

int main()
{
    int t,n,m,a,b,i,j,x,y;

    scanf("%d",&t);
    while(t--)
    {
        zero(5000);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v[a].push_back(i);
        }
        int flag = 0;

        for(i=1;i<=5000;i++)
        {
            if(v[i].size()>=3){
                flag = 1;
                break;
            }
            else if(v[i].size()==2)
            {
                if(abs(v[i][0]-v[i][1])>1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }








return 0;
}
