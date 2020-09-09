#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,x,y,z,m,c;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld %lld",&m,&a,&b);

            c = m*a;

            if(m%2==0)
            {
                x = (b*m)/2;
            }
            else{
                x = (b*(m-1))/2+a;
            }
        y = min(x,c);



        printf("%lld\n",y);




    }






return 0;
}
