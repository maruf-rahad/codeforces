#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1111];
    int n,a,b,i,j,x,y,z,m;

    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+n);

        int sum = 0;

        for(i=0;i<m;i++)
        {
            if(ara[i]<0)
            sum=sum+ara[i];
        }


        printf("%d\n",-sum);
    }



return 0;
}
