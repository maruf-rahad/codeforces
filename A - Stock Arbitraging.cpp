#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,i,j,x,y,sum,flag,n,m;


    while(scanf("%d %d %d",&n,&m,&b)==3)
    {
        vector<int>v;
        vector<int>v2;

        for(i=1;i<=n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(i=1;i<=m;i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());

        a = b/v[0];
        x = b - a*v[0];
        int z = v2.size();
        y = a*v2[z-1]+x;

        if(y<b)
        {
            printf("%d\n",b);
        }
        else{
            printf("%d\n",y);
        }

    }










return 0;
}
