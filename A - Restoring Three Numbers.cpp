#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5];
    int a,b,i,j,x,y,z;

    while(scanf("%d",&ara[1])==1)
    {
        for(i=2;i<=4;i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara+1,ara+4+1);
            x = ara[4]-ara[1];
            y = abs(x - ara[2]);
            z = abs(x-ara[3]);
        printf("%d %d %d\n",x,y,z);
    }










return 0;
}

