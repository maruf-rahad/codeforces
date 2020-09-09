#include<bits/stdc++.h>
using namespace std;
int ara[1000010];
int main()
{
    int n,x,y,a,b,i,j,t;

    while(scanf("%d %d %d",&n,&x,&y)==3)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1; i<=n; i++)
        {

            int flag = 0;

            for(j=i-1; j>=i-x&&j>=1; j--)
            {
                if(ara[i]>=ara[j])
                {

                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                for(j=i+1; j<=i+y&&j<=n; j++)
                {
                    if(ara[i]>=ara[j])
                    {

                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
                break;
        }
        printf("%d\n",i);



    }










    return 0;
}

