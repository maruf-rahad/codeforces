#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,sum,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        sum = 0;
        x = 1;
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
             sum=sum+b-a+1;
            x = a-x;
             y = x%m;
            sum=sum+y;
            x=b+1;
        }
        printf("%d\n",sum);

    }

return 0;
}

