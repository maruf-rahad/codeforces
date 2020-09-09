#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j;
    while(scanf("%lld",&n)==1)
    {
        if(n%2==1)printf("0\n");
        else{
            a = n/2;
            a = pow(2,a);
            printf("%lld\n",a);
        }


    }

return 0;
}

