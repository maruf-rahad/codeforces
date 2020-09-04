#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t,sum;

    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&n);
        for(i=1;i<n/2;i++)
        {
            a = pow(2,i);
            sum+=a;
        }
        a = pow(2,n);
        sum+=a;

        x = 0;
        for(i=n/2;i<n;i++)
        {
            a = pow(2,i);
            x+=a;
        }
        printf("%d\n",sum-x);

    }











return 0;
}
