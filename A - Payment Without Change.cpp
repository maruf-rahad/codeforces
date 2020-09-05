#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,n,m,x,y,sum,t,s,flag;

    scanf("%lld",&t);
    while(t--)
    {
        flag = 0;

        scanf("%lld %lld %lld %lld",&a,&b,&n,&s);

        if(n==s)
        {
            flag = 1;
        }
        if(n>s&&b>=s)
        {
            flag = 1;
        }
        x = s/n;
        if(a<x)
        {
            sum = a*n;
        }
        else {
            sum = x*n;
        }
        if(sum+b>=s)
        {
            flag = 1;
        }

        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }










return 0;
}
