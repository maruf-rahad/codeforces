#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,i,j,x,y,a,b,sum,flag;

    scanf("%lld",&t);
    while(t--)
    {
        vector<long long>v;
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        x = v.size();
        a = v[x-1]-v[0];

        if(2*m>=a)
        {
            printf("%lld\n",v[0]+m);
        }
        else{
            printf("-1\n");
        }
    }







return 0;
}

