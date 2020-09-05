#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,m,x,y,sum;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&n,&x,&y)==6)
    {
        sum = 0;
        if(x>=y)
        {
            sum = min(a,n)*x;
            n-=min(a,n);
            sum+=min(b,min(c,n))*y;
        }
        else{
            sum+=min(b,min(c,n))*y;
            n-=min(b,min(c,n));
            sum += min(a,n)*x;

        }
        printf("%d\n",sum);
    }








return 0;
}
