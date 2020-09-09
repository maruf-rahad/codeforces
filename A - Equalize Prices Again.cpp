#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,a,b,i,j,x,y,sum;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            sum = 0;
            scanf("%d",&n);
            b = n;
            while(n--)
            {
                scanf("%d",&a);
                sum+=a;
            }
            if(sum%b==0)printf("%d\n",sum/b);
            else printf("%d\n",sum/b+1);
        }



    }










return 0;
}
