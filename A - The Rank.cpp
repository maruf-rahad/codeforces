#include<bits/stdc++.h>
using namespace std;
int ara[30000];
void hoga(int a)
{
    for(int i=0;i<=a+2;i++)
    {
        ara[i] = 0;
    }

}
int main()
{
    int n,a,b,i,j,sum;

    while(scanf("%d",&n)==1)
    {
        hoga(n);

            for(i=1;i<=n;i++)
            {
                for(j=1;j<=4;j++)
                {
                    scanf("%d",&a);
                    ara[i] = ara[i] +a;
                }
            }
             sum = 0;
            for(i=2;i<=n;i++)
            {
                if(ara[1]<ara[i])
                {
                    sum++;
                }
            }
            printf("%d\n",sum+1);
    }











return 0;
}

