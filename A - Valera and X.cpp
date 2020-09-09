#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,n,i,j;
    char str;
    while(scanf("%d",&n)==1)
    {
        char ch[n+1][n+1];
        scanf("%c",&str);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            scanf("%c",&str);
        }
        int flag = 0;
        char ah = ch[1][1];
        char bh = ch[1][2];
        if(ah==bh)
        {
            flag=1;
        }

        int x = 1,y=n;
        int c = (n/2)+1;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {

                if(i==j)
                {
                    if(i==c)
                    {
                        x++;
                        y--;
                    }
                    if(ch[i][j]!=ah){
                    flag = 1;
                    break;
                    }
                }
               else if(i==x&&j==y)
                {
                    if(ch[i][j]!=ah)
                    {
                        flag=1;
                        break;
                    }
                    x++;
                    y--;
                }
                else{
                    if(ch[i][j]!=bh)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }

return 0;
}


