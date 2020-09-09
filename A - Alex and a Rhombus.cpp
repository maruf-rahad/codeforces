#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,sum;

    while(scanf("%d",&n)==1)
    {
        j = 1;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            sum = sum+j;
            j+=2;
        }
        j = 1;
        for(i=1;i<n;i++)
        {
            sum+=j;
            j+=2;
        }


        if(n==1)
        {
            printf("1\n");
        }
        else{
            printf("%d\n",sum);
        }




    }










return 0;
}

