#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
ll ara[30];
int main()
{
    ll n,m,a,b,i,j,x,y,sum,flag,t,sz;
    string s,s2;
    char ch;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        cin>>s;
        memset(ara,0,sizeof(ara));
        for(i=1;i<=m;i++)
        {
            cin>>ch;
            a = ch-'a'+1;
            ara[a] = 1;
        }
        int sz = s.size();
        x = 0;
        y = 0;
        sum = 0;
        for(i=0;i<=sz;i++)
        {
            a = s[i]-'a'+1;
            if(ara[a]==1)
            {
                y++;
            }
            if(ara[a]==0)
            {
                sum+=((x*(x+1))/2);

                x = 0;
            }
            else {
                x++;
            }
        }
        printf("%lld\n",sum);
    }










return 0;
}
