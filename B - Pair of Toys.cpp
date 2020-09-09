#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,c,d,x,y,flag,flag2,n,m;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        flag  = 0;
        c = m/2;
        if(c>=n)
        {
            flag = 1;
        }
        if(flag == 0)
        {

            if(n>=m)
            {

                if(m%2==1)
                {
                    printf("%lld\n",m/2);
                }
                else
                {
                    printf("%lld\n",(m/2)-1);
                }
            }
        else{

            c = m/2;
            printf("%lld\n",n-c);


        }
        }
        if(flag==1)
        {
            printf("0\n");
        }
    }











    return 0;
}

