#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
map<int,int>mp;
int ara[200005];
int ara2[100005];
int cnt[200005];
int ans[30];
char ch[200005];
int main()
{
    int n,m,a,b,i,j,x,y,flag,sum,k,t;
    string s,s2;
    char str;


    scanf("%d",&t);
    while(t--)
    {
        memset(ans,0,sizeof(ans));
        memset(ara,0,sizeof(ara));
        scanf("%d %d",&n,&m);
        getchar();
        scanf("%s",&ch);
        for(i=1;i<=m;i++)
        {
            scanf("%d",&a);
            ara[a]++;
        }
     for(i=n-1;i>=1;i--)ara[i] = ara[i]+ara[i+1];

        sum = 0;
        for(i=n;i>=1;i--)
        {
            a = ch[i-1]-'a'+1;
            ans[a]+=(ara[i]+1);
        }
        for(i=1;i<=26;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");



    }








return 0;
}
