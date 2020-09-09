#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j;
    int ara[1020];
    int ara2[1020];
    while(scanf("%d %d",&n,&m)==2)
    {

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d",&ara2[i]);
        }
        a = 1;
        b = 1;
        int s = 0;

        while(1)
        {
            if(ara[a]>ara2[b])
            {
                a++;
            }
            else{
                a++;
                b++;
                s++;
            }
            if(a>n||b>m)break;
        }
        printf("%d\n",s);
    }







return 0;
}

