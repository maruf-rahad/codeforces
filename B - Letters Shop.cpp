#include<bits/stdc++.h>
using namespace std;
vector<int>v[30];
int ara[30];

int main(){

    string s,s2;
    int n,m,a,b,i,j,x,y,sum,t;

    scanf("%d",&n);
    cin>>s;
    m = s.size();
    for(i=0;i<m;i++)
    {
        a = s[i]-'a'+1;
        v[a].push_back(i+1);

    }

    cin>>t;

    while(t--)
    {
        for(i=0;i<=28;i++)
        {
            ara[i] = 0;
        }
        cin>>s2;
        m = s2.size();
        int mx = 0;
        for(i=0;i<m;i++)
        {
            a = s2[i]-'a'+1;
            ara[a]++;
        }
        for(i=1;i<=26;i++)
        {
            if(ara[i]!=0)
            {
                a = ara[i];
                b = v[i][a-1];
                if(b>mx)
                {
                    mx = b;
                }
            }

        }
        printf("%d\n",mx);
    }







    return 0;
}

