#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,sum;
    long long ara[222222];

    while(scanf("%lld",&n)==1)
    {

        ara[0] = 0;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }

        sum = ara[n];
        for(i=n-1;i>=1;i--)
        {
             if(ara[i+1]==0)break;

            if(ara[i]<ara[i+1])
            {
                sum += ara[i];
            }
            else{
                ara[i] = ara[i+1]-1;
                sum+=ara[i];
            }



        }


        printf("%lld\n",sum);



    }







return 0;
}

