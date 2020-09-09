#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b,sum,x,y;

    while(scanf("%lld %lld %lld",&a,&b,&n)==3)
    {

        printf("%lld ",(a+b)/n);

        if(a%n+b%n<n)
        {
            printf("0\n");
        }
        else{
            x = abs(n-a%n);
            y = abs(n-b%n);
            printf("%lld\n",min(x,y));
        }
    }





return 0;
}
