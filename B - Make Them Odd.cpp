#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int ara[200010];
int main()
{

    int t,n,a,b,i,j,x,y,sum;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            mp.clear();

            scanf("%d",&n);
            sum = 0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&ara[i]);
                a = ara[i];
                while(a%2!=1&&mp.find(a)==mp.end())
                {
                  //  printf("%d\n",a);
                  mp[a] = 1;
                    sum++;
                    a = a/2;

                }
            }
            printf("%d\n",sum);
        }
    }








return 0;
}
