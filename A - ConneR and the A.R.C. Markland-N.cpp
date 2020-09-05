#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,a,b,i,j,x,y,t,k;

    scanf("%d",&t);
    while(t--)
    {
        mp.clear();
        scanf("%d %d %d",&n,&m,&k);

        for(i=1;i<=k;i++)
        {
            scanf("%d",&a);
            mp[a] = 1;
        }
        int mn = 1e9+5;
     for(i=0;i<=k;i++)
     {
         if(m+i<=n&&mp.find(m+i)==mp.end())
         {
                mn = min(mn,i);
         }
         if(m-i>=1&&mp.find(m-i)==mp.end())
         {
             mn = min(mn,i);
         }
     }
     printf("%d\n",mn);



    }









return  0;
}
