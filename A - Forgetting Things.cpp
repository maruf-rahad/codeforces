#include<bits./stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,i,j,x,y;

    while(scanf("%d %d",&a,&b)==2)
    {
        if(b-a==1)
        {
            printf("%d %d\n",a,b);
        }
        else if(a==b)
        {
            printf("%d0 %d1\n",a,b);
        }
        else if(a==9&&b==1)
        {
            printf("%d %d0\n",a,b);
        }
        else
        {
            printf("-1\n");
        }

    }


return 0;
}
