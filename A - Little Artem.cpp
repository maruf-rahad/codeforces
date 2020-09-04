#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int ara[n+5][m+5];

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(i==1&&j==1)printf("W");
                else printf("B");
            }
            printf("\n");
        }

    }











return 0;
}
