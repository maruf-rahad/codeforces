#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[222],n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        memset(ara,0,sizeof(ara));
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            ara[a]++;
        }
        i = 1;
        while(m!=-1)
        {
            if(ara[i]==0)
            {
                m--;
            }
            i++;
        }

        printf("%d\n",i-2);
    }








return 0;
}
