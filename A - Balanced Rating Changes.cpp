#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int ara[22222];
int ara2[22222];
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag;
    while(scanf("%d",&n)==1)
    {
        flag = 0;
        sum = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            ara2[i] = ara[i];
            if(ara[i]%2==0)
            {
                ara[i] = ara[i]/2;
            }
            else{
                    if(ara[i]>0)
                        ara[i] = (ara[i]/2)+1;
                    else
                        ara[i] = ara[i]/2;
            }

            sum = sum+ara[i];
           // printf("i = %d sum %d\n",ara[i],sum);
        }
        for(i=0;i<n;i++)
        {
            if(sum>0&&abs(ara2[i])%2==1)
            {
               // printf("%d\n",x);
                ara[i]-=1;
                sum-=1;
            }

        }
        for(i=0;i<n;i++)
        {
            printf("%d\n",ara[i]);
        }

    }









return 0;
}
