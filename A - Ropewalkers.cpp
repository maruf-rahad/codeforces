#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4];
    int n,m,a,b,i,j,sum;
    while(scanf("%d %d %d %d",&ara[1],&ara[2],&ara[3],&a)==4)
    {
        ara[0] = 0;
        sum = 0;
        sort(ara,ara+4);


        if(ara[3]-ara[2]<a)
        {
            sum = a - (ara[3] - ara[2]);
        }

        if(ara[2]-ara[1]<a)
        {
            sum += a - (ara[2] - ara[1]);
        }

        printf("%d\n",sum);




    }













    return 0;
}

