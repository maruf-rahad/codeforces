#include<bits/stdc++.h>
using namespace std;
vector<int>v[200020];
 
void zero(int n)
{
 
    for(int i=0; i<=n+5; i++)
    {
        v[i].clear();
    }
}
int main()
{
    int t,n,m,a,b,i,j,x,y,mn;
 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        zero(n);
        mn = 1e9;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            v[a].push_back(i);
        }
 
 
        for(i=1;i<=n;i++)
        {
            for(j=1;j<v[i].size();j++)
            {
                mn = min(mn,abs(v[i][j]-v[i][j-1]));
            }
        }
 
        if(mn==1e9)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n",mn+1);
            }
    }
    return 0;
}