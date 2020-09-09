#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,j,x,y,t,l,r,c,b,d;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&l,&r);

        a = r/2;
        c = (l-1)/2;

        b = ceil((double)r/2);
        d = ceil((double)(l-1)/2);

        x = (a*(a+1))-(c*(c+1));
        y = b*b-d*d;

        printf("%lld\n",x-y);









    }









return 0;
}

