#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    double a,b,sum,mi;

    scanf("%d %d",&n,&m);

    mi = 99999999;
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&a,&b);

        sum = (a/b)*(double)m;

        if(sum<mi)
        {
            mi = sum;
        }

    }

    printf("%0.8lf\n",mi);




return 0;
}
