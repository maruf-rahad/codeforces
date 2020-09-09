#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,m,b,i,j,sum;
    while(scanf("%d",&n)==1)
    {
        sum = 0;

        scanf("%d",&m);
        a=m;
        b=m;
        n--;
        while(n--)
        {
            scanf("%d",&m);
            if(m>a)
            {
                sum++;
                a=m;
            }
            else if(m<b)
            {
                b=m;
                sum++;
            }

        }
        printf("%d\n",sum);
    }






return 0;
}

