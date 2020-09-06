#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
map<string,int>mp;
int main()
{
    int a,b,i,j,y,n,t,m,sum,flag;
    string ah,bh,x;
    char str;

    scanf("%d",&t);
    while(t--)
    {
        mp.clear();
        cin>>ah>>bh;
        n = bh.size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {


                    x = bh.substr(i,j+1);
                    sort(x.begin(),x.end());
                  //  cout<<x<<endl;
                    mp[x] = 1;

            }
        }
        sort(ah.begin(),ah.end());
        if(mp.find(ah)!=mp.end())
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }




    }











return 0;
}
