#include<bits/stdc++.h>
using namespace std;
int ara[120];
int main()
{
    int n,a,b,i,j,sum;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        sort(ara+1,ara+n+1);

        sum = 0;

        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                sum += ara[i]-ara[i-1];

            }
        }
        printf("%d\n",sum);
    }









return 0;
}

