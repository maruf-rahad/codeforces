#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,sum;
    int ara[120];

    while(scanf("%d",&n)==1)
    {

    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    sum = 0;
    for(i=2;i<=n;i++)
    {
       if(ara[i]==0&&i<n&&ara[i-1]==1&&ara[i+1]==1)
       {
           sum++;
           ara[i+1] = 0;
       }
    }
    printf("%d\n",sum);


    }





return 0;
}

