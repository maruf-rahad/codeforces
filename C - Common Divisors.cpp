#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,s,a,b,i,j,x,y,flag,flag2;

    scanf("%lld",&n);
    vector<ll>one;
    vector<ll>two;
    unordered_map<ll,int>mp;
        flag = 0;
        flag2 = 0;
        while(n--)
        {
            scanf("%lld",&a);

            if(flag2==0)
            {
                mp[a] = 1;

                for(i=1; i*i<=a; i++)
                {
                    if(a%i==0)
                    {
                        one.push_back(i);
                        if(i!=a/i)
                        {
                            one.push_back(a/i);
                        }
                    }
                }
                flag2 = 1;
                two.clear();
            }

            if(flag==0)
            {
                if(mp.find(a)!=mp.end())
                {
                    continue;
                }
                mp[a] = 1;

                for(i=0; i<one.size(); i++)
                {
                    if(a%one[i]==0)
                    {
                        two.push_back(one[i]);
                    }
                }
                flag=1;
                one.clear();
            }
            else if(flag==1)
            {
                if(mp.find(a)!=mp.end())continue;

                mp[a] = 1;
                for(i=0;i<two.size();i++)
                {
                    if(a%two[i]==0)
                    {
                        one.push_back(two[i]);
                    }
                }
                two.clear();
                flag=0;
            }

        }

        if(!one.size())
        {
            cout<<two.size();
        }
        else{
            cout<<one.size();
        }
        cout<<endl;







        return 0;
}


