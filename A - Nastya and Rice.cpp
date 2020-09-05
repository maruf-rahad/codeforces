#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c,d,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);

        if(n*(a+b)>=c-d&&n*(a-b)<=c+d)printf("Yes\n");
        else printf("No\n");
    }












return 0;
}
