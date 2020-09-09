#include<bits/stdc++.h>
using namespace std;
int ara[101];
int main()
{
    int n,a,b,i,j,x,y,sum,sub,tot,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        sum = 0;
        sub = 0;

        for(i=0; i<101; i++)
        {
            ara[i] = 0;
        }

        while(n--)
        {
            scanf("%d",&a);
            if(a%m==0)
            {
                sum++;
            }
            else
            {

                b = a%m;
                ara[b]++;
            }


        }


        tot = (sum/2)*2;

       // printf("tot %d\n",tot);


        for(i=1; i<=100; i++)
        {
            // printf("\n%d : ",i);
            for(j=1; j<=100; j++)
            {
                // printf("%d ",j);
                if(ara[i]!=0 && ara[j]!=0 )
                {
                    if((i+j)%m==0)
                    {


                        if(i==j)
                        {
                           // printf("\n%d %d",i,j);

                            tot = tot +(ara[i]/2)*2;
                            ara[i]  = ara[i] - (ara[i]/2)*2;

                        }
                        else
                        {

                            a = min(ara[i],ara[j]);

                            ara[i] = ara[i] - a;
                            ara[j] = ara[j] - a;

                            tot = tot + a*2;

                        }





                    }
                }



            }
        }

        printf("%d\n",tot);



    }













    return 0;
}

