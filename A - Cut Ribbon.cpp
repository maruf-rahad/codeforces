#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4];
    int a,b,i,j,ma,sum,n,c;


    while(scanf("%d %d %d %d",&n,&ara[1],&ara[2],&ara[3])==4)
    {

            ma = -99;
            sort(ara+1,ara+4);

            for(i = 0 ; ara[2]*i<=n ; i++)
            {
                for(j =0 ;ara[1]*j<=n;j++)
                {
                    a = ara[1]*j;
                    b = ara[2]*i;
                    c = n-a-b;
                    if(c>=0&&c%ara[3]==0)
                    {
                        sum = i+j+(c/ara[3]);
                        if(sum>ma)
                        {
                            ma = sum;
                        }
                    }

                }
            }

            printf("%d\n",ma);
    }

    return 0;
}

