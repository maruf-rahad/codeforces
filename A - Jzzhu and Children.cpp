#include<bits/stdc++.h>
using namespace std;
int ara[110];
int main()
{
    int n,m,a,i,x,ans,mx;
    while(scanf("%d %d",&n,&m)==2)
    {
        mx = -9;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
 
            if(a%m==0)
            {
                x = a/m;
            }
            else{
                x = a/m+1;
            }
            if(x>=mx)
            {
                mx = x;
                ans = i;
            }
        }
        printf("%d\n",ans);
    }
return 0;
}
