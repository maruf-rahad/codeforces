#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main()
{
    int t,n,m,a,b,i,j,x,y,mx;
    string s;

    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        v.clear();
        v.push_back(0);
        int x = s.size();

        for(i=0;i<x;i++)
        {
            if(s[i]=='R')
            {
                v.push_back(i+1);
            }
        }
        v.push_back(x+1);
        mx = -9;
        for(i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]>mx)
            {
                mx = v[i]-v[i-1];
            }
        }

        printf("%d\n",mx);

    }










return 0;
}
