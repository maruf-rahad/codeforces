#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,x,y,sum;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        int flag  = 0;
        sum = 1;
        for(i=1; i<=a; i++)
        {
            sum  = sum*2;
            if(sum>b)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d\n",b);
        }
        else{
        printf("%lld\n",b%sum);

        }


    }




    return 0;
}
