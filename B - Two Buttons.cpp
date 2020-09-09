#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,sum;
    while(scanf("%d %d",&n,&m)==2)
    {
        sum=0;
        if(n>=m){
        printf("%d\n",n-m);
        }
        else
        {
        while(n<m){
        if(m%2==0){
        m/=2;
        sum++;
        }
        else{
        m++;
        sum++;
        }

        }


        printf("%d\n",n-m+sum);
        }

    }

    return 0;
}

