#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,sum;

    while(scanf("%lld",&n)==1)
    {
        while(n--)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
            {
                printf("%d\n",b);
                continue;
            }

            x = b%a;
            y = a-x;
            sum = b/a;

            printf("%d\n",sum*sum*y+(sum+1)*(sum+1)*x);




        }
    }







return 0;
}
