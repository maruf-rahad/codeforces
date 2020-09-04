#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main()
{
    int t,n,m,a,b,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        v.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int flag = 0;
        for(i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]>1)flag = 1;

        }

        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }













return 0;
}
