#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
vector<int>v;

int main()
{
    int t,n,m,a,b,i,j,x,y,flag,flag2,sum,mn,mx;
    string s,s2;

    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        flag = 0;
        mn = 1e9+5;
        mx = -1e9;
            mp.clear();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            mp[a] = 1;
        }
       printf("%d\n",mp.size());


    }















return 0;
}
