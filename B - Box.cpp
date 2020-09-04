#include<bits/stdc++.h>
using namespace std;
int ara[111111];
int vis[111111];
int main()
{

    int i,j,a,b,x,y,n,m,t,flag;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)vis[i] = 0;
        flag = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);

            if(ara[i]<i)
            {
                flag = 1;
            }
        }

        if(flag==1)
        {
            printf("-1\n");
        }
        else
        {
            x = 1;
            for(i=1; i<=n; i++)
            {

                if(vis[ara[i]]==0)
                {
                    printf("%d ",ara[i]);
                    vis[ara[i]] = 1;
                }
                else
                {
                    while(1)
                    {
                        if(vis[x]==0)
                        {
                            printf("%d ",x);
                            vis[x] = 1;
                            break;
                        }
                        else
                        {
                            x++;
                        }
                    }
                }

            }
               printf("\n");
        }




    }













    return 0;
}
