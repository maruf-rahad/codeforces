#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int> :: iterator it;
int main()
{
    int n,m,a,b,i,j,ma;
    string s,ss;

    while(scanf("%d",&n)==1)
    {
        mp.clear();
        for(i=1;i<=n;i++)
        {
            cin>>s;
            if(mp.find(s)==mp.end())
            {
                mp[s] = 1;
            }
            else{
                mp[s] = mp[s]+1;
            }
        }
        ma = -1;

        for(it = mp.begin();it!=mp.end();it++)
        {
            if(it->second>ma)
            {
                ma = it->second;
                ss = it->first;

            }
        }
        cout<<ss<<endl;


    }








return 0;
}

