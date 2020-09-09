#include<bits/stdc++.h>

using namespace std;
long long ara[100005];
long long ara2[100005];
long long n = 100000,x;
map<long long,long long>mp;
map<long long,long long>mp2;
map<long long,long long> :: iterator it;

vector<long long>v;
void sieve()
{
    long long i,j;
    ara[1] = 1;
    v.push_back(2);

    for(i=4; i<=n; i+=2)
    {
        ara[i] = 1;
    }

    for(i=3; i<=n; i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(j=i*i; j<=n; j+=i)
            {
                ara[j] = 1;
            }
        }
    }




}
int main()
{
    long long n,a,b,i,j,x,y,flag,sum=0;

    sieve();

    while(scanf("%lld %lld",&a,&b)==2)
    {
        mp.clear();
        mp2.clear();

        for(i=0; i<v.size(); i++)
        {
            if(v[i]>a)break;

            while(a%v[i]==0)
            {
                //cout<<"yes"<<endl;
                x = v[i];
                a = a/v[i];
                if(mp.find(x)==mp.end())
                {
                    // cout<<"yes2"<<endl;
                    mp[x] = 1;
                }
            }



        }
         if(a!=1)
            {
                if(mp.find(a)==mp.end())
                {
                    // cout<<"yes2"<<endl;
                    mp[a] = 1;
                }

            }


        for(i=0; i<v.size(); i++)
        {
            if(v[i]>b)break;

            while(b%v[i]==0)
            {
                //cout<<"yes"<<endl;
                x = v[i];
                b = b/v[i];
                if(mp2.find(x)==mp2.end())
                {
                    // cout<<"yes2"<<endl;
                    mp2[x] = 1;
                }
                if(mp.find(x)!=mp.end())
                {
                    // cout<<"yes2"<<endl;
                    mp[x] = 2;
                }
            }


        }
         if(b!=1)
            {
                if(mp2.find(b)==mp2.end())
                {
                    // cout<<"yes2"<<endl;
                    mp2[b] = 1;
                }
                if(mp.find(b)!=mp.end())
                {
                    // cout<<"yes2"<<endl;
                    mp[b] = 2;
                }
            }
        long long ma = -99,flag = 0, ttt=0;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if(ttt == 0)printf("%d",it->first);
            else printf(" %d",it->first);
            ttt++;
            if(it->second==2)
            {
                flag = 1;
                a = it->first;

                if(a>ma)ma = a;
            }
        }

        cout<<endl;
        ttt=0;

        for(it = mp2.begin(); it!=mp2.end(); it++)
        {
            if(ttt == 0)printf("%d",it->first);
            else printf(" %d",it->first);
            ttt++;
        }
         cout<<endl;
        if(flag == 1)
        {
            printf("%d\n",ma);
        }
        else
        {
            printf("-1\n");
        }

    }
    return 0;
}

