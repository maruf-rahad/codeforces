#include<bits/stdc++.h>
using namespace std;
int ara[110];
int main()
{
    int n,m,a,b,i,j,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        int sum = ara[1];
        for(i=2;i<=n;i++)
        {
            if(ara[i]*(i-1)<=m)
            {
                sum+=ara[i];
                m-=ara[i]*(i-1);
            }
            else{
                sum+=m/(i-1);
                m=0;
            }
        }

        printf("%d\n",sum);
    }









return 0;
}
