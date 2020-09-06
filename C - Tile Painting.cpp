#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 1000000+2
ll ara[sz+10];
 
vector<ll>v;
vector<ll>v2;
void sieve()
{
    v.push_back(2);
 
    for(ll i=3;i<=sz;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
 
            for(ll j=i*i;j<=sz;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
 
}
int main()
{
    sieve();
 
    ll a,b,i,j,x,y,sum,s,flag,n;
 
    while(scanf("%lld",&n)==1)
    {
        s = sqrt(n);
        v2.clear();
        flag = 0;
        x = v.size();
        for(i=2;i<=s;i++)
        {
            if(n%i==0)
            {
                flag = 1;
                if(i==n/i)
                {
                    v2.push_back(i);
 
                }
                else {
                    v2.push_back(i);
                    v2.push_back(n/i);
 
                }
            }
        }
 
        if(flag==0){
            printf("%lld\n",n);
        }
        else
        {
            sum = n;
            for(i=0;i<v2.size();i++)
            {
                sum = __gcd(sum,v2[i]);
            }
 
            printf("%lld\n",sum);
 
        }
 
    }
return 0;
}