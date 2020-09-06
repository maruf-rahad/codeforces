#include<bits/stdc++.h>
using namespace std;
map<int,pair<int,int> >mp;

void precal()
{
    int a,f,s,x,nf,ns;
    queue<pair<int,pair<int,int > > >q;
    mp[4] = make_pair(1,0);
    mp[7] = make_pair(0,1);

    q.push(make_pair(4,mp[4]));
    q.push(make_pair(7,mp[7]));

    while(!q.empty())
    {

        a = q.front().first;
        if(a>1000000)
        {
            q.pop();
            continue;
        }
        f = q.front().second.first;
        s = q.front().second.second;
       //   printf("%d %d %d\n",a,f,s);

          q.pop();

        if(mp.find(a+4)==mp.end())
        {
            x = a+4;
            nf = f+1;
            mp[x] = make_pair(nf,s);
            q.push(make_pair(x,make_pair(nf,s)));
        }
        if(mp.find(a+7)==mp.end())
        {
            x = a+7;
            ns = s+1;
            mp[x] = make_pair(f,ns);
            q.push(make_pair(x,make_pair(f,ns)));
        }



    }



}
int main()
{
    int n,f,s,i;
    mp.clear();
    precal();

    while(scanf("%d",&n)==1)
    {

        if(mp.find(n)==mp.end())
        {
            printf("-1\n");
        }
        else{

            f  = mp[n].first;
            s  = mp[n].second;


            for(i=1;i<=f;i++)
            {
                printf("4");
            }
            for(i=1;i<=s;i++)
            {
                printf("7");
            }


            printf("\n");

        }
    }











return 0;
}
