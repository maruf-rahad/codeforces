#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,flag,x,y;

    while(scanf("%d %d %d",&a,&b,&n)==3)
    {
        flag = 0;
        if(a>=b)
        {
            flag = 1;
        }
        x = n/2;

        for(i=1; i<=x; i++)
        {
            if(flag==1)
            {
                printf("0");
                a--;
            }
            else
            {
                printf("1");
                b--;
            }

            if(i==x&&n%2==0)
                break;

            if(flag==1)
            {
                printf("1");
                b--;
            }
            else
            {
                printf("0");
                a--;
            }
            //printf("i = %d %d \n",i,x);
        }
        if(n%2==1)
        {
            if(flag==1)
            {
                for(i=1; i<=a; i++)
                {
                    printf("0");
                }
                for(i=1; i<=b; i++)
                {
                    printf("1");
                }
            }
            else
            {
                for(i=1; i<=b; i++)
                {
                    printf("1");
                }
                for(i=1; i<=a; i++)
                {
                    printf("0");
                }
            }

        }

        if(n%2==0)
        {
            if(flag==1)
            {
                for(i=1; i<=b; i++)
                {
                    printf("1");
                }
                for(i=1; i<=a; i++)
                {
                    printf("0");
                }
            }
            else
            {
                for(i=1; i<=a; i++)
                {
                    printf("0");
                }
                for(i=1; i<=b; i++)
                {
                    printf("1");
                }
            }


        }

        printf("\n");

    }

    return 0;
}

