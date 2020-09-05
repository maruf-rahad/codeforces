#include<bits/stdc++.h>
using namespace std;
char ch[60][60];
int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }

        int flag = 0;

        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if((ch[i][j]=='1'&&ch[i][j+1]=='0')&&(ch[i][j]=='1'&&ch[i+1][j]=='0'))flag = 1;
            }
        }

        if(flag==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }


    }












return 0;
}
