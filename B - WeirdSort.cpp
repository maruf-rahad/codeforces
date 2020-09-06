#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
map<int,int>mp;
int ara[100005];
int ara2[100005];
int ara3[100005];
int main()
{
    int n,m,a,b,i,j,x,y,flag,sum,k,t;
    string s,s2;
    char str;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            ara3[i]=ara[i];
        }
        for(i=1; i<=m; i++)
        {
            scanf("%d",&ara2[i]);
        }
        sort(ara2+1,ara2+m+1);

        for(i=1; i<=m; i++)
        {
            for(j=1; j<=m; j++)
            {
                a = ara2[j];
                if(ara[a]>ara[a+1])swap(ara[a],ara[a+1]);
            }
        }

        sort(ara3+1,ara3+n+1);

        flag = 0;
        for(i=1; i<=n; i++)
        {
            if(ara[i]!=ara3[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }



    }








    return 0;
}
