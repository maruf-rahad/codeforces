#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j,a,b,sum,total,m;
    int ara[500000];
    vector<int>v;
    map<int ,pair<int ,int> >mp;
    scanf("%d",&n);
    int flag = 0;
    for(j = 1;j<= n;j++)
    {
        scanf("%d",&m);
        sum = 0;
        for(i=1;i<=m;i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        if(flag==0)
        {

        for(i=1;i<=m;i++)
        {
            total = sum - ara[i];
            if(mp.find(total)==mp.end())
            {
                mp[total].first = i;
                mp[total].second = j;
            }
            else if (mp.find(total)!=mp.end()&&mp[total].second != j ){
                    flag = 1;
                    v.push_back(j);
                    v.push_back(i);
                    v.push_back(mp[total].second);
                    v.push_back(mp[total].first);
            }
        }

        }
    }
    if(flag==1)
    {
        printf("YES\n%d %d\n%d %d\n",v[0],v[1],v[2],v[3]);
    }
    else{
        printf("NO\n");
    }

return 0;
}

