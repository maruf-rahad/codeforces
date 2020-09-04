#include<bits/stdc++.h>
using namespace std;

int ara[120];
vector<char>v[120];
int main()
{
    int t,n,m,a,b,i,j,y,sum,flag;
    char x;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(i=0;i<=110;i++)v[i].clear();

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=100;i++)
        {
            v[1].push_back('a');
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=ara[i];j++)
            {
                v[i+1].push_back(v[i][j-1]);
            }

            if(ara[i]==0)j = 0;
            else j--;

            if(v[i][j]=='a')x = 'b';
            else x = 'a';

            for(j=j;j<=100;j++)v[i+1].push_back(x);
        }

        for(i=1;i<=n+1;i++)
        {
            for(j=0;j<v[i].size();j++)
            {
                printf("%c",v[i][j]);
            }
            printf("\n");
        }


    }









return 0;
}
