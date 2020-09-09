#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int> :: iterator it;
int ara[100006];

int main()
{
    int a,b,i,j,x,y,m,n,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        sum = 0;
        for(i=1;i<=n;i++)ara[i] = 0;

        for(i=1;i<=m;i++)
        {
            scanf("%d",&a);

            if(ara[a]==0)
            {
                sum++;
            }
            ara[a]++;
            if(sum==n)
            {
                printf("1");
                for(j=1;j<=n;j++)
                {
                    ara[j]--;
                    if(ara[j]==0)sum--;
                }
            }
            else{
                printf("0");
            }
        }
        printf("\n");





    }









return 0;
}

