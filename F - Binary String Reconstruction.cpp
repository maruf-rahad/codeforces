#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n,a,b,i,j,x,y,t,one,zero,two;

    scanf("%d",&t);

        while(scanf("%d %d %d",&zero,&one,&two)==3)
        {
            x = 0;
            if(one%2==0&&one>0)printf("1");

            for(i=1;i<=zero;i++)
            {
                printf("0");
            }
            for(i=1;i<=(one+1)/2;i++)
            {
                printf("01");
                x = 1;
            }
            if(x==0&&zero>0)printf("0");
            if(x==0&&two>0)printf("1");
            for(i=1;i<=two;i++)printf("1");

            printf("\n");

        }












        return 0;
    }
