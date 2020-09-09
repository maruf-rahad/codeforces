#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,a,b,i,j,x,y;
    while(scanf("%d %d",&n,&m)==2)
    {
        mp.clear();
        int ara[m+1];
        x = 0;
        for(i=1;i<=m&&i<=n;i++)
        {
            scanf("%d",&a);

            if(mp.find(a)==mp.end())
            {
                mp[a] = 1;
                ara[++x] = a;
               // printf("%d %d\n",x,a);
            }
        }

        for(i=m+1;i<=n;i++)
        {
            if(x==m)x = 0;

            scanf("%d",&a);
            if(mp.find(a)==mp.end())
            {
                mp[a] = 1;
                y = ara[++x];
                mp.erase(y);
                ara[x] = a;
            }


        }
        int z = mp.size();
        int sum = 0;
        printf("%d\n",z);
        for(i=x;i>=1;i--)
        {
            if(mp.find(ara[i])!=mp.end())
               {
                   printf("%d ",ara[i]);
                   sum++;
                   if(sum==z)break;

               }
        }

        for(i=m;i>x;i--)
        {
            if(sum==z)break;
            if(mp.find(ara[i])!=mp.end())
            {
                sum++;
                    printf("%d ",ara[i]);
            }

        }

        printf("\n");



    }









return 0;
}

