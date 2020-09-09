#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[120];
    int n,m,a,b,i,j,sum,w,x,y;
    while(scanf("%d %d %d",&n,&w,&b)==3)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        x = min(w,b);
        sum = 0;
        int flag = 0;

            if(n%2==0)
            {
                y = n/2;
            }
            else{
                y = n/2+1;
            }

        for(i=1;i<=y;i++)
        {
            if(ara[i]==ara[n-i+1]&&ara[i]!=2&&ara[n-i+1]!=2)
            {
                continue;
            }
            else if(ara[i]==2&&ara[n-i+1]==2&&i!=n-i+1)
            {
                sum=sum+x+x;
            }
            else if(ara[i]==2&&ara[n-i+1]==2)
            {
                sum=sum+x;
            }
            else if(ara[i]!=2&&ara[n-i+1]!=2&&ara[i]!=ara[n-i+1])
            {
                flag = 1;
                break;
            }

            else if(ara[i]==0&&ara[n-i+1]==2)
            {
                sum+=w;
            }
             else if(ara[i]==2&&ara[n-i+1]==0)
            {
                sum+=w;
            }
            else if(ara[i]==2&&ara[n-i+1]==1)
            {
                sum+=b;
            }
            else if(ara[i]==1&&ara[n-i+1]==2)
            {
                sum+=b;
            }

        }
        if(flag==1)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n",sum);
        }
    }















return 0;
}

