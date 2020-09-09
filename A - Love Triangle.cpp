#include<bits/stdc++.h>
using  namespace std;
int ara[5005];
int main()
{
    int n,a,b,i,j,x,y,c;

    while(scanf("%d",&n)==1)
    {
        int flag = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1;i<=n;i++)
        {

            j = 1;
            x = i;

            while(j<=3)
            {
                a = ara[i];
                b = ara[a];
                c = ara[b];
                if(i==c)
                {
                    flag = 1;
                    break;
                }




                j++;
            }
            if(flag==1)break;
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }








return 0;
}
