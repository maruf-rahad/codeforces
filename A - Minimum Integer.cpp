#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,n,l,r,d;

    while(scanf("%lld",&n)==1)
    {
        while(n--)
        {


            scanf("%lld %lld %lld",&l,&r,&d);

            if(d<l||d>r)
            {
                printf("%lld\n",d);
            }
            else
            {

                a = r%d;

                printf("%lld\n",r-a+d);


            }

        }




    }







    return 0;
}
