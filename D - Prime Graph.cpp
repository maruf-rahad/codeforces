#include<bits/stdc++.h>
using namespace std;
bool isprime(int a)
{
    for(int i = 2 ;i*i<=a;i++)
    {
        if(a%i==0)
            return false;
    }

    return true;
}
int koytalagbo(int n)
{
    int x = n;

    if(isprime(x))
        return x;
    for(int i=x+1; ; i++)
    {
        if(isprime(i))
            return i;
    }



}
int main()
{
    int a,b,i,j,x,y,flag,sum,n;

    while(scanf("%d",&n)==1)
    {

        sum = 0;
        int total = 0;

        total = koytalagbo(n);

        printf("%d\n",total);

        for(i=1;i<=n-1;i++)
        {
            printf("%d %d\n",i,i+1);
            sum++;
        }
        printf("%d %d\n",n,1);

        sum++;

        if(sum==total)continue;

        flag = 0;
        x = 1;
        y = n-1;


        for(j=sum+1;j<=total;j++)
        {
            printf("%d %d\n",x,y);
            x++;
            y--;


        }


    }







return 0;
}

