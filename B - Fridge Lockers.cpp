#include<bits/stdc++.h>
using namespace std;

int ara[1111];

int main()
{
    int n,m,a,b,i,j,x,y,t,sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }

        if(n>m||n==2)
        {
            printf("-1\n");
        }
        else
        {

            printf("%d\n",sum*2);

            for(i=1;i<n;i++)
            {
                printf("%d %d\n",i,i+1);
            }
            printf("%d %d\n",n,1);

        }
    }











    return 0;
}
