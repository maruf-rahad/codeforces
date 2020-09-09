#include<bits/stdc++.h>
using namespace std;
char ch[1005][1005];
int ara[1005];
int cnt[6];
int main()
{
    char str;
    int n,m,a,b,i,j,sum;
    while(scanf("%d %d",&n,&m)==2)
    {
        sum = 0;
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);

            }
            getchar();
        }

        for(i=1;i<=m;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1;i<=m;i++)
        {
            memset(cnt,0,sizeof(cnt));
            for(j=1;j<=n;j++)
            {
                a = ch[j][i]-'A'+1;
                cnt[a]++;
            }
            a = *max_element(cnt,cnt+6);
            sum+=a*ara[i];
        }

        printf("%d\n",sum);




    }









return 0;
}

