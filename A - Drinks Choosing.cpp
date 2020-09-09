#include<bits/stdc++.h>
using namespace std;
int ara[1010];
int main()
{
    int n,m,a,b,i,j,x,y,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        memset(ara,0,sizeof(ara));

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            ara[a]++;
        }
        x = 0;
        y = m;
        sum = 0;
        for(i=1; i<=y; i++)
        {
            if(ara[i]!=0)
            {
                a = ara[i]/2;
                m-=a;
                sum += a*2;
                if(ara[i]%2==1)
                {
                    x++;
                }

            }

        }
       // printf("%d %d %d\n",m,x,sum);

        printf("%d\n",sum+(x+1)/2);


    }









    return 0;
}

