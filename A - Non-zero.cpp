#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y,sum,tot;

    while(scanf("%d",&t)==1)
    {
        while(t--){
        scanf("%d",&n);
        sum = 0;
        tot = 0;
        while(n--)
        {
            scanf("%d",&a);
            sum+=a;
            if(a==0)
            {
                tot++;
                sum++;
            }
        }

        if(sum==0)
        {
            printf("%d\n",tot+1);
        }
        else{
            printf("%d\n",tot);
        }



        }

    }










return 0;
}
