#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,a,b,i,j,x,y,sum,mn,mx,t;
    string s;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        v.push_back(-1);
        sum = 1;
        mx = -1;
        for(i=1;i<=n;i++)
        {
            if(v[i]==v[i-1])
            {
                sum++;
                mx = max(mx,sum);
            }
            else{
                mx = max(mx,sum);
                sum = 1;
            }
        }
        printf("%d\n",mx);
    }











return 0;
}
