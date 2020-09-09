#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,int>mp;

    int a,n,b,i,j;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(mp.find(a)==mp.end())
        {
            mp[a] = 1;
        }
        else{
            mp[a]++;
        }
    }
    map<int ,int > :: iterator it;
    int sum = 1;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>sum)
        {
            sum = it->second;
        }
    }
    printf("%d\n",sum);

    mp.clear();

return 0;
}

