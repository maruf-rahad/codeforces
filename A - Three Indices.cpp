#include<bits/stdc++.h>
using namespace std;
int ara[1111];
int main()
{
    int t,n,m,a,b,i,j,x,y;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m = n;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }

        int flag = 0;

        i = 1;
        j = m;

        while(i<=j)
        {
            if(ara[i]!=m&&ara[j]!=m)
            {
                a = m;
                flag = 1;
                break;
            }

            if(ara[i]==m)
            {
                i++;
                m--;
            }
            else if(ara[j]==m)
            {
                j--;
                m--;
            }

        }
        if(flag ==0)
        {
            printf("NO\n");
            continue;
        }

        printf("YES\n");

        for(i=1; i<=n; i++)
        {
            if(ara[i]<m)
            {
                printf("%d ",i);
                break;
            }
        }
        for(i=1; i<=n; i++)
        {
            if(ara[i]==m)
            {
                printf("%d ",i);
                b = i;
                break;
            }
        }

        for(i=b; i<=n; i++)
        {
            if(ara[i]<m)
            {
                printf("%d\n",i);
                break;
            }
        }

    }










    return 0;
}
