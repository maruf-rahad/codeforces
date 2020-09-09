#include<bits/stdc++.h>
using namespace std;
int ara[333333];
int main()
{
    int n,a,b,i,j,sum,sub,x,y;

    while(scanf("%d",&n)==1)
    {
        sum = 0;
        sub = 0;
        int total = 0;

        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            if(i%2==1)
            {
                sum = sum+ara[i];
            }
            else
            {
                sub = sub+ara[i];
            }
        }

        //printf("%d %d\n",sum,sub);
        int baad  = 1;
        a = 0;
        b = 0;
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
               // printf("%d %d \n",a,b);
                x = sub - a-ara[i]+b;
                y = sum-b+a;
                if(x==y)
                {
                    total++;
                  //  printf("yes %d\n",i);
                }
            }
            else
            {
                x = sum - b-ara[i]+a;
                y = sub-a+b;
                if(x==y)
                {
                    total++;
                  //  printf("yes2 %d\n",i);
                }
            }



            if(i%2==0)
            {
                a = a+ara[i];
            }
            else
            {
                b = b+ara[i];
            }
        }

        printf("%d\n",total);



    }









    return 0;
}

