#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,b,i,j,z,x,y,c,sum,flag,n;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        flag = 0;

        for(i=2; flag==0&&i*i<=n; i++)
        {
            if(n%i==0)
            {
                for(j=2; flag==0&&j*j<=i; j++)
                {
                    if(flag==0&&i%j==0&&j*j!=i)
                    {
                        a = i/j;
                        b = j;
                        c = n/i;
                        if(a!=b&&a!=c&&b!=c)
                            flag = 1;
                    }
                }
                if(flag==0)
                {
                    a = i;
                    x = n/i;
                    for(j=2; flag==0&&j*j<=x; j++)
                    {
                        if(flag==0&&x%j==0&&j*j!=x)
                        {
                            a = i;
                            b = j;
                            c = x/j;
                            if(a!=b&&a!=c&&b!=c)
                                flag = 1;
                        }
                    }
                }
            }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
            printf("%lld %lld %lld\n",a,b,c);
        }
    }











    return 0;
}
