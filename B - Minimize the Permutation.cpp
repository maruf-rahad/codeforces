#include<bits/stdc++.h>
using namespace std;
int ara[110];
int visited[110];
int main()
{
    int t,n,m,a,b,i,j,x,y,sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        memset(visited,0,sizeof(visited));
        sum = 0;
        for(i=1;i<=n&&sum<n;i++)
        {
            for(j=1;j<=n&&sum<n;j++)
            {
                if(ara[j]==i&&ara[j-1]>ara[j])
                {
                    while(sum<n&&visited[j-1]==0&&ara[j-1]>ara[j])
                    {
                        visited[j-1] = 1;
                        sum++;
                        swap(ara[j],ara[j-1]);
                        j--;
                    }
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }










return 0;
}
