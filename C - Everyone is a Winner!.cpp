#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
int main()
{
    ll t,n,m,a,b,i,j,x,y;
 
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        v.clear();
        v.push_back(0);
        x = sqrt(n);
        for(i=1;i<=x;i++)
        {
 
 
                v.push_back(i);
                if(i!=n/i)
                {
                    v.push_back(n/i);
                }
 
        }
        sort(v.begin(),v.end());
 
        x = v.size();
        printf("%lld\n",x);
        for(i=0;i<v.size();i++){
            printf("%lld ",v[i]);
        }
        printf("\n");
    }
return 0;
}