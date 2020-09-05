#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,t,xx,yy;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        x = (a-c-1)*b;
        y = (c)*b;
        xx = (b-d-1)*a;
        yy = (d)*a;

        printf("%d\n",max(max(max(xx,yy),y),x));


    }









return 0;
}
