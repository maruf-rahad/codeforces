#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
vector<int>v;
int ara[222222];

int main()
{
    int t,n,m,a,b,i,j,x,y,mx;
    string s;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
      x = ara[1];
      mx = x;
      printf("%d",x);
      for(i=2;i<=n;i++)
      {
          printf(" %d",x+ara[i]);
          x = x+ara[i];
          mx = max(x,mx);
          x = mx;
      }
      printf("\n");

    }











return 0;
}
