#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,a,b,i,j,x,y,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);\
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        x = 0;
        a = 0;
        b = 0;
        for(i=0;i<v.size();i++)
        {
            a = v[i]-x;
            x = v[i];
            if(a==0)continue;

            printf("%d\n",a);
            b++;
            if(b==m)break;

        }
        for(i=b+1;i<=m;i++)
        {
            printf("0\n");
        }

    }

return 0;
}
