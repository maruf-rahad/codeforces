#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,n,m,t,k;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {

            scanf("%d %d",&n,&m);

            for(i=1; i<=n; i++)
            {
                b = i%m;
                if(b!=0)
                {
                    a = 'a'+b-1;
                }
                else
                {
                    a = 'a'+m-1;
                }

                printf("%c",a);
            }
            printf("\n");

        }

    }







    return 0;
}

