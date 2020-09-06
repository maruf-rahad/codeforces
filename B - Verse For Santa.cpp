#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int ara[100005];
int main()
{
    ll n,m,t,a,b,i,j,x,y,sum,flag,flag2,mx;
    string s,s2;
    char ch;
    scanf("%lld",&t);

    while(t--)
    {
        sum = 0;
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            sum+=ara[i];
        }
        if(sum<=m)
        {
            printf("0\n");
        }
        else{
                sum = 0;
                flag = 0;
                x = 0;
                mx = -1;
                b = 0;
            for(i=1;i<=n;i++)
            {
                sum+=ara[i];
                if(sum>m&&flag==1)
                {
                    break;
                }
                if(ara[i]>mx)
                {
                    mx = ara[i];
                    b = i;
                }
                if(sum>m&&flag==0)
                {
                    sum-=ara[b];
                    flag = 1;
                    continue;
                }
                if(sum<=m)
                {
                    x++;
                }


            }
            printf("%lld\n",b);
        }
    }










return 0;
}
