#include<bits/stdc++.h>
using namespace std;
int ara[1005];
int main()
{
    int t,n,m,a,b,i,j,sum,mx;

    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",min(sum,m));
    }











return 0;
}
