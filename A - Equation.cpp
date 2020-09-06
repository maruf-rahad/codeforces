#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    int s = sqrt(n);

    for(int i=2;i<=s;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,a,b,i,j,x,y,t;

    while(scanf("%d",&n)==1)
    {

        i = 4;
        while(1)
        {
            if(!check(i)&&!check(i+n))
            {
                printf("%d %d\n",i+n,i);
                break;
            }
            i++;
        }


    }










return 0;
}

