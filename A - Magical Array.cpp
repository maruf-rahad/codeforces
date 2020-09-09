#include<bits/stdc++.h>
using namespace std;
long long ara[100005];
long long ara2[100005];
int main()
{
    long long a,b,i,j,x,y,sum,n;

    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<100002;i++)ara2[i]=0;


        scanf("%lld",&ara[1]);
        x = 1;
        ara2[x]++;

        for(i=2;i<=n;i++)
        {
            scanf("%lld",&ara[i]);

            if(ara[i]==ara[i-1])
            {
                ara2[x]++;
            }
            else{
                x++;
                ara2[x]++;
            }
        }

        sum = 0;

        for(i=1;i<=n;i++)
        {
            a = ara2[i];
            sum = sum+(a*(a+1))/2;
        }

        printf("%lld\n",sum);


    }







return 0;
}
