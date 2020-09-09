#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,x,y,z,c;
    while(scanf("%lld %lld",&n,&m)==2)
    {
         c = n+m;
        x = 0;
        y = 0;
        while(n!=0)
        {
            a = n%10;
            if(a==0)
            {
                n = n/10;
                continue;
            }
            x = x*10+a;
            n = n/10;
        }
        // printf("%d\n",x);
        n = 0;
        while(x!=0)
        {
            n = n*10+x%10;
            x = x/10;
        }
        //  printf("%d\n",n);
        while(m!=0)
        {
            a = m%10;
            if(a==0)
            {
                m = m/10;
                continue;
            }
            x = x*10+a;
            m = m/10;
        }
        //    printf("%d\n",x);
        m = 0;
        while(x!=0)
        {
            m = m*10+x%10;
            x = x/10;
        }
        // printf("%d\n",m);
        while(c!=0)
        {
            a = c%10;
            if(a==0)
            {
                c = c/10;
                continue;
            }
            x = x*10+a;
            c = c/10;
        }
        // printf("%d\n",x);
        y = 0;
        while(x!=0)
        {
            y = y*10+x%10;
            x = x/10;
        }
        //  printf("%d\n",y);

        if(n+m==y)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }








    }





    return 0;

}

