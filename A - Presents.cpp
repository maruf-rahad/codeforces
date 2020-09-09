#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;
    int ara[120];


    while(scanf("%d",&n)==1)
    {

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            ara[a] = i;
        }

        printf("%d",ara[1]);

        for(i=2;i<=n;i++)
        {
            printf(" %d",ara[i]);
        }
        printf("\n");
    }





return 0;
}
