#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,e,d,x,y,a,b,ans;

    while(scanf("%d %d %d",&n,&d,&e)==3)
    {
        ans = 1e9;
        for(i=0;i*e*5<=n;i++)
        {
            ans = min(ans,(n-i*5*e)%d);
        }
        printf("%d\n",ans);






    }








return 0;
}

