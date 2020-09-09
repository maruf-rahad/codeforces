#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,x,y,l,z,p;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        for(i=1;i<=m;i++)
        {

        scanf("%lld %lld",&a,&b);

        if(n%2==0)
        {
             l = n/2;

            if(a%2==0)
            {
                if(b%2==0)
                {
                x = (a-1)*l;
                y = x+b/2;
                printf("%lld\n",y);
                }
                else{
                x = (n*n)/2+(a-1)*l;
                y = x+(b/2)+1;
                printf("%lld\n",y);

                }
            }
            else{
                if(b%2==1)
                {
                    x = (a-1)*l;
                    y = x+(b/2)+1;
                    printf("%lld\n",y);
                }
                else{
                    x = (n*n)/2+(a-1)*l;
                y = x+b/2;
                printf("%lld\n",y);

                }


            }



        }
        else{
                l = (n/2)+1;
               if(a%2==0)
               {

                    if(b%2==0)
                    {
                    x = (a/2)*l;
                    y = ((a/2)-1)*(l-1);
                    z = x + y;

                        z = z+b/2;
                        printf("%lld\n",z);
                    }
                    else{
                        p = ((n/2)+1)*l+(n/2)*(l-1);
                        x = (a/2)*(l-1);
                        y = ((a/2)-1)*l;
                        z = p+x+y;
                        z = z+(b/2)+1;
                        printf("%lld\n",z);

                    }

               }
               else{
                if(b%2==1)
                {
                    x = (a/2)*l+(a/2)*(l-1);
                    z = x+(b/2)+1;
                    printf("%lld\n",z);
                }
                else{
                    p = ((n/2)+1)*l+(n/2)*(l-1);
                    x = (a/2)*l+(a/2)*(l-1);
                    z = p + x;
                    z = z + (b/2);
                    printf("%lld\n",z);
                }

               }

        }

        }

    }


return 0;
}

