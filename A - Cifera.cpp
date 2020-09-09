#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,x,flag;

    while(scanf("%lld %lld",&n,&a)==2)
    {
        x = 0;
        b = n;
        flag = 0;
        if(b==a)
        {
            printf("YES\n0\n");
            flag = 1;
        }
        else{
        while(b<a)
        {
            b = b*n;

            x++;

            if(b==a)
            {
                printf("YES\n%d\n",x);
                flag = 1;

            }
        }

        }
        if(flag==0)printf("NO\n");

    }

return 0;
}

