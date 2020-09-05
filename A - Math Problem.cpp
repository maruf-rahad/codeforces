
#include<bits/stdc++.h>
using namespace std;
int ara[111111];
int main()
{
    int n,m,a,b,i,j,x,y,t,mn,mx;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        mn = 9999999999;
        mx = -9;

        for(i=1;i<=n;i++)
        {
                scanf("%d %d",&a,&b);
                mn = min(mn,b);
                mx = max(mx,a);
        }
        if(mx-mn>0)
            printf("%d\n",mx-mn);
        else
            printf("%d\n",0);

    }









    return 0;
}
