#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,boy,girl,n,g;

    while(scanf("%d %d %d",&b,&g,&n)==3)
    {
        boy = 0;
        girl = 0;
        i = 0;
        int sum = 0;
        for(i=0;i<=n;i++)
        {
            if(i<=b&&n-i<=g)sum++;
        }
        printf("%d\n",sum);

    }








return 0;
}

