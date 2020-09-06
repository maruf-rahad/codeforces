
#include<bits/stdc++.h>
using namespace std;
int ara[200005];
int main()
{
    int n,m,a,b,i,j,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n*2;i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara+1,ara+2*n+1);
        printf("%d\n",abs(ara[n]-ara[n+1]));
    }







return 0;
}
