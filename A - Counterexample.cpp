#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    long long m;
    m=a%b;
    if(m==0)
    {
        return b;
    }
    else{
        a=b;
        b=m;
    }
     gcd(a,b);
}
int main()
{
    long long a,b,n,m,i,j,x,y,k,c,d;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        int flag = 0;
        for(i=n;i<=m;i++)
        {
            for(j=i+1;j<=m;j++)
            {
                if(i!=j)
                {
                    a = gcd(j,i);
                    if(a==1){
                            b = max(i,j);
                            x = min(i,j);
                       for(k = b+1;k<=m;k++)
                       {
                           c = gcd(b,k);
                           d = gcd(x,k);
                           if(c==1&&d!=1)
                           {
                               flag = 1;
                               break;
                           }
                       }
                    }
                }
                if(flag==1)break;
            }
            if(flag==1)break;

    }
    if(flag==1)
    {
        printf("%lld %lld %lld\n",x,b,k);
    }
    else{
        printf("-1\n");
    }

    }



return 0;
}

