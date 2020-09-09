#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,sum,flag;
    while(scanf("%lld",&n)==1)
    {

            n++;
            flag = 0;
            sum = 0;
            while(flag==0)
            {
                sum++;
                a = n;
                if(a<0)a =-a;
                while(a>0)
                {

                    if(a%10==8)
                    {
                        printf("%lld\n",sum);
                        flag = 1;
                        break;
                    }
                    a = a/10;
                }
                n++;
            }



    }

    return 0;
}
