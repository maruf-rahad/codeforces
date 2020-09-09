#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,m;
    char ch[120][120],str;

    while(scanf("%d %d%c",&n,&m,&str)==3 )
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            scanf("%c", &str);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ch[i][j]=='-')
                {
                    printf("-");
                }
                else{
                    if(i%2==1&&j%2==1)
                    {
                        printf("B");
                    }
                    else if(i%2==0&&j%2==1)
                    {
                        printf("W");
                    }
                    else if(i%2==1&&j%2==0)
                    {
                        printf("W");
                    }
                    else if(i%2==0&&j%2==0)
                    {
                        printf("B");
                    }
                }

            }
            printf("\n");
        }
    }







    return 0;
}

