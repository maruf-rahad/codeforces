#include<bits/stdc++.h>
using namespace std;
int ara[111111];
int ara2[111111];

int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara2[i]);
        }

        int flag = 0,flag2 = 0,flag3 = 0;

        for(i=1;i<=n;i++)
        {
            if(ara[i]>ara2[i]){
                    flag2 = 1;
                    break;
            }
            else if(flag==1&&ara[i]==ara2[i])
            {
                flag3 = 1;
            }
            else if(ara[i]==ara2[i])
            {
                continue;
            }
            else if(flag==0&&ara[i]!=ara2[i])
            {
                flag = 1;
                a = ara2[i]-ara[i];
            }
            else if(flag3==1&&ara[i]!=ara2[i])
            {
                flag2 = 1;
            }
            else if(flag==1&&ara2[i]-ara[i]!=a)
            {
                flag2 = 1;
                break;
            }


        }
        if(flag2==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }










return 0;
}
