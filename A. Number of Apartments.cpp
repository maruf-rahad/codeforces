#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a,b,i,j,x,y,z,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        if(n==1||n==2||n==4)printf("-1\n");
        else if(n%3==0)printf("%d 0 0\n",n/3);
        else if((n-5)%3==0)printf("%d %d %d\n",(n-5)/3,1,0);
        else printf("%d %d %d\n",(n-7)/3,0,1);
    }






return 0;
}
