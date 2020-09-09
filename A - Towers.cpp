#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1110];
    int n,a,b,i,j,sum;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<=1100;i++)
        {
            ara[i] = 0;
        }
        sum = 0;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);

            if(ara[a]==0)sum++;

            ara[a]++;

        }
        a = *max_element(ara,ara+1100);
        printf("%d %d\n",a,sum);

    }





return 0;
}
