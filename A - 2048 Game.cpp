#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[3000];
int main()
{
    int a,b,i,j,x,y,sum,flag,n,m;

    scanf("%d",&m);
    while(m--)
    {
        memset(ara,0,sizeof(ara));
        flag = 0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a>2048)continue;

            if(a==2048)flag = 1;
            ara[a]++;
        }
        for(i=1;i<=2048;i++)
        {
            while(ara[i]>=2)
            {
                a = i+i;

                ara[a]++;
                ara[i]-=2;
                if(ara[2048]>0)flag = 1;
            }
        }
        if(flag == 1)printf("YES\n");
        else printf("NO\n");
    }










return 0;
}
