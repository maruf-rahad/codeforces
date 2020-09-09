#include<bits/stdc++.h>
using namespace std;
int ara[1200];
int main()
{
    int n,m,a,b,c,d,x,y,i,j,flag,flag2;


    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        a = 1;

        x = 0;
        y = 1;
        flag = 0;
        flag2 = 0;
        while(1)
        {
            flag=0;
            i = a+m-1;
            if(i>n)
            {
                i = n;
            }


                for(j = i;j>=a;j--)
                {
                    if(ara[j]==1)
                    {
                        x++;
                      //  printf(" %d  %d\n",i,a);
                        a = j;
                        y = j;
                    //    printf("paisi : %d\n",a);

                        a = a+m;
                  //      printf("new : %d\n",a);

                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                {
                    for(j=a-1;j>y;j--)
                    {
                        if(ara[j]==1)
                        {
                            x++;
                            flag = 1;
                            a = j;
                            y = j;
                            a = a+m;
                        }
                    }
                }
                if(flag==0)
                {
                    printf("-1\n");
                    flag2=1;
                    break;
                }
                if(a>n){
                break;
                }





        }
        if(flag2==0)
        {
            printf("%d\n",x);
        }

    }








    return 0;

}

