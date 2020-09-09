#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,c,d,n,y,z,p,q,m,x;

    while(scanf("%lld %lld",&n,&m)==2)
    {


        x = m*2;

        if(x>=n)
        {
            x = 0;

        }
        else{
            x = n-x;
        }

        p = 1+8*m;
      //  printf("%lld\n",p);

        q = (sqrt(p) - 1);
      //  printf("%lld\n",q);

        q = q/2;

       // printf("%lld\n",q);

        if(q>=n)
            z = 0;
        else{

                long long r = (q*(q+1))/2;
               // printf("%lld\n",r);
                    if(r==m)
                    {
                        z = n-(q+1);
                    }
                    else{
                            q = q+1;
                       r = (q*(q+1))/2;
                       z = n - q-1;
                    }

        }
        if(m == 0)
        {
            z =n;
        }

        printf("%lld %lld\n",x,z);


    }



return 0;
}

