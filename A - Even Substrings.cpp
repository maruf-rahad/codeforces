#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,sum;
    char str;
    while(scanf("%lld",&n)==1)
    {
        getchar();
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%c",&str);
            if((str-'0')%2==0)
            {
                sum+=i;
            }
        }

        printf("%d\n",sum);

    }







return 0;
}

