#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,sum,t;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        sum = 0;
        int flag = 0;

        while(n!=1)
        {
            if(n%2==0)
            {
                n = n/2;
                sum++;
            }
            else if(n%3==0)
            {
                n = (2*n)/3;
                sum++;
            }
            else if(n%5==0)
            {
                n = (4*n)/5;
                sum++;
            }
            else{

                flag = 1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%lld\n",sum);
        }
        else{
            printf("-1\n");
        }


    }

}

