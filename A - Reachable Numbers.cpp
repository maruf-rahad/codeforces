#include<bits/stdc++.h>
using namespace std;
map<long long,int>mp;
int main()
{
    long long n,a,b,i,j,x,y;

    while(scanf("%lld",&n)==1)
    {
        mp.clear();
        int flag=0,flag2=0,sum = 0;
        mp[n] = 1;

        while(!flag)
        {
            n = n+1;
            while(n%10==0)
            {
                n = n/10;
            }
            if(mp.find(n)!=mp.end())
            {
                break;
            }
            else{
                mp[n] = 1;
                sum++;
            }


        }
        a = mp.size();
        printf("%lld\n",a);
    }









return 0;
}

