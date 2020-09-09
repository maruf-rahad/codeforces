#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,c,d,temp,x,y,z;

    while(scanf("%d %d",&n,&a)==2)
    {
        if(n*2%a==0)
        {
            x = n*2/a;
        }
        else{
            x = n*2/a+1;
        }

        if(n*5%a==0)
        {
            y = n*5/a;
        }
        else{
            y = n*5/a+1;
        }

        if(n*8%a==0)
        {
            z = n*8/a;
        }
        else{
            z = n*8/a+1;
        }

        printf("%d\n",x+y+z);

    }









return 0;
}

