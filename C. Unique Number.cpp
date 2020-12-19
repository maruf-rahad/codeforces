#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y;

    m = 45;
    int ara[11];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n>m)
        {
            printf("-1\n");
            continue;
        }
        else{
            memset(ara,0,sizeof(ara));

            for(i=9;i>=1;i--)
            {
                if(n>=i)
                {
                    ara[i] = 1;
                    n-=i;
                }
            }
        }
        int flag = 0;
        for(i=1;i<=9;i++)
        {
            if(ara[i]!=0)
            {
                printf("%d",i);
            }

        }
        printf("\n");
    }









return 0;
}
