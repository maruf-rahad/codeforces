#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,x,y,n,m;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        priority_queue<long long>pq;
        map<long long,long long>mp;
        pq.push(-n);
        mp[a] = 0;
        int flag = 0;
        while(!pq.empty())
        {
            a = -pq.top();

            if(a==m)
            {
                flag = 1;
                break;
            }
            else if(a>m)
            {
                break;
            }
            pq.pop();

            x = a*2;
            y = a*3;

            if(mp.find(x)==mp.end())
            {
                mp[x] = mp[a]+1;
                pq.push(-x);
            }
            if(mp.find(y)==mp.end())
            {
                mp[y] = mp[a]+1;
                pq.push(-y);
            }
        }

        if(flag==1)
        {
            printf("%lld\n",mp[a]);
        }
        else{
            printf("-1\n");
        }



    }









return 0;
}

