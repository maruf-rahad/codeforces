#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,sum;

    int ara[44444];

    while(scanf("%d",&n)==1)
    {
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1;i<=n;i++)
        {
            int mx = ara[i];
            sum++;
          //  printf("i : %d\n",i);

            for(j = i;j<=mx;j++)
            {
                i = mx;
            //    printf("j = %d\n",j);
                if(ara[j]>mx)
                {

                    mx = ara[j];


                }

            }
            if(mx>=n)break;
        }

        printf("%d\n",sum);



    }











return 0;
}

