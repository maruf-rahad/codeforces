#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,flag,x,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        while(m--)
        {
            scanf("%d %d",&a,&b);
        }
        for(i=1;i<=n/2;i++)
        {
            printf("0");
            printf("1");
        }
        if(n%2==1)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}

