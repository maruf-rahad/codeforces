#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[200010];
vector<int>v;
int main()
{
    ll a,b,n,m,t,i,j,x,y,sum,mx,mn;
    char str;
    string s,s2;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        for(i=1;i<=n;i++)scanf("%lld",&ara[i]);
       if(n>m)
       {
           printf("0\n");
           continue;
       }
       else{
        sum = 1;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                sum=(sum*(abs(ara[i]-ara[j]))%m)%m;
            }
        }
        printf("%d\n",sum);
       }
    }










return 0;
}
