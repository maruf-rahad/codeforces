#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4];

    int t,n,m,a,b,i,j;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d %d %d",&ara[1],&ara[2],&ara[3]);

            sort(ara+1,ara+3+1);

            if(ara[3]!=ara[2])
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
                printf("%d %d %d\n",ara[1],ara[1],ara[3]);
            }
        }
    }





return 0;
}
