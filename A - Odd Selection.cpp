#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,m,a,b,i,j,x,y;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        a = 0;
        b = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            if(x%2==0)a++;
            else b++;
        }

        if(m%2==0)
        {
            if(a>=m)
            {
                a = m-1;
            }
            else{
                if((m-a)%2==0&&a>0)
                {
                    a = a-1;
                }
            }

            if(b>=m-a&&(m-a)%2==1)
            {
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            if(a>=m)
            {
                a = m-1;
            }
            else{

                if((m-a)%2==0&&a>0)
                {
                    a = a-1;
                }
            }


            if(b>=m-a&&(m-a)%2==1)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");




        }



    }









return 0;
}
