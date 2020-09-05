#include<bits/stdc++.h>
using namespace std;
char ch[25][20];
char ch2[25][20];
int main()
{
    int t,n,m,a,b,i,j,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=1;i<=n;i++)scanf("%s",&ch[i]);
        for(i=1;i<=m;i++)scanf("%s",&ch2[i]);

        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&x);

            if(x%n==0)a = n;
            else a = x%n;

            if(x%m==0)b = m;
            else b = x%m;

            printf("%s%s\n",ch[a],ch2[b]);
        }
    }











return 0;
}
