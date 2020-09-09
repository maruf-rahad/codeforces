#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,x,y,flag,s ;

    while(scanf("%lld",&n)==1)
    {
        a = 0;
        flag = 0;
        s = sqrt(n+1);

        if(n%2==0)
        {
            a = n/2;
            flag=1;
        }
        else{
            for(i=3;i<=s;i+=2)
            {
                if(n%i==0)
                {

                    flag=1;
                    n=n-i;
                    a = (n/2) +1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("1\n");
        }
        else{
            printf("%lld\n",a);
        }


    }




return 0;
}

