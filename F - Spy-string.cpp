#include<bits/stdc++.h>
using namespace std;
string s[12];

bool check(string ans,int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        int sum = 0;
        for(int j=0;j<m;j++)
        {
            if(ans[j]!=s[i][j])sum++;
        }
        if(sum>1)return false;
    }
    return true;
}

int main()
{
    int t,n,m,a,b,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string ans;

        for(i=1;i<=n;i++)
        {
            cin>>s[i];
        }
        ans = s[1];
        int flag = 0;
        for(i=0;i<m;i++)
        {
            a = s[1][i];

            for(j=0;j<=25;j++)
            {
                ans[i] = j+'a';
                if(check(ans,n,m))
                {
                    flag = 1;
                    break;
                }

            }
            if(flag)break;
            ans[i] = a;
        }
        if(flag)
        {
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }



    }












    return 0;
}
