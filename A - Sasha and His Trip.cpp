#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,m,sum;
    while(scanf("%d %d",&n,&m)==2)
    {

        a = n-1;
        sum = 0;

        if(m>=a)
        {
            printf("%d\n",a);
        }
        else{
            b = m;
            sum+=b;

            a = a-b+1;
            x = (a*(a+1))/2-1;


            printf("%d\n",sum+x);

        }







    }




return 0;
}

