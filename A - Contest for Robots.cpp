#include<bits/stdc++.h>
using namespace std;
int ara[110];
int ara2[110];

int main()
{
    int n,x,y,sum,flag,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara2[i]);
        }
        x = 0;
        flag = 0;
        y = 0;
        for(i=1;i<=n;i++)
        {
            if(ara[i]==1&&ara2[i]==0)
            {
                flag = 1;
                x++;
            }

            if(ara[i]==0&&ara2[i]==1)
            {
                y++;
            }
        }
        if(flag==0)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n",y/x+1);

        }

    }











return 0;
}
