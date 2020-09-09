#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y,t,a,b;

    while(scanf("%d %d",&n,&m)==2)
    {
        a = (m/2)*n;
        if(m%2==1)
        {
            b = n/2;
        }
        else
        {
            b = 0;
        }

        printf("%d\n",a+b);



    }








    return 0;
}
