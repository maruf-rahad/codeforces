#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&a,&b);
        int mx=-9,mx2=-9;
        for(i=1;i<=a;i++)
        {
            scanf("%d",&x);
            mx = max(mx,x);
        }
        for(i=1;i<=b;i++)
        {
            scanf("%d",&x);
            mx2 = max(mx2,x);
        }

        if(mx>mx2)printf("YES\n");
        else printf("NO\n");
    }








return 0;
}
