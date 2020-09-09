#include<bits/stdc++.h>
using namespace std;
int ara[110][110];
int main()
{

    int n,m,a,b,i,j;

    while(scanf("%d %d",&n,&m)==2)
    {

        int x = m-n+1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                {
                    printf("%d ",x);
                }
                else{
                    printf("1 ");
                }
            }
            printf("\n");
        }

    }








return 0;
}

