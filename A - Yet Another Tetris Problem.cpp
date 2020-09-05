#include<bits/stdc++.h>
using namespace std;
int ara[200];
int main()
{
    int t,n,m,a,b,i,j,x,y;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        int flag = 0;
        x = ara[1]%2;
        for(i=1;i<=n;i++)
        {
            if(ara[i]%2!=x%2)flag = 1;
        }

        if(!flag)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }







    }







return 0;
}
