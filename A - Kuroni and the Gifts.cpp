#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
vector<int>v2;
int main()
{
    int a,b,n,m,t,i,j,x,y,sum,mx,mn;
    char str;
    string s,s2;

    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        v2.clear();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v2.push_back(a);
        }

        sort(v.begin(),v.end());
         sort(v2.begin(),v2.end());
         for(i=0;i<n;i++)
         {
             printf("%d ",v[i]);
         }
         printf("\n");
         for(i=0;i<n;i++)
         {
             printf("%d ",v2[i]);
         }
         printf("\n");






    }










return 0;
}
