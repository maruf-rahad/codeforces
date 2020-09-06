#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,a,sum,ans;
    while(scanf("%d",&n)==1)
    {
        ans = 0;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        n++;
 
        for(i=1;i<=5;i++)
        {
            if(((sum+i)%n)!=1)
            {
                ans++;
            }
        }
 
        printf("%d\n",ans);
    }
return 0;
}
