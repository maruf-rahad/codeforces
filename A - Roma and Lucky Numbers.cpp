#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,m,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            x = 0;
            while(a>0)
            {
                b = a%10;

                if(b==4||b==7)
                {
                    x++;
                }

                a = a/10;
            }
            if(x<=m)
            {
                sum++;
            }

        }
        printf("%d\n",sum);

    }





return 0;
}

