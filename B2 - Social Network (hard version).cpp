#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,a,b,i,j,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        deque<int>q;
        vector<int>v;
        mp.clear();
        x = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            if(mp.find(a)==mp.end())
            {
                if(x==m)
                {
                    b = q.front();
                    q.pop_front();
                    mp.erase(b);
                    mp[a] = 1;
                    q.push_back(a);

                }
                else
                {
                    x++;
                    mp[a] = 1;
                    q.push_back(a);
                }
            }

        }
        printf("%d\n",q.size());
        while(!q.empty())
        {
            a = q.back();
            printf("%d ",a);
            q.pop_back();
        }

        printf("\n");
    }










    return 0;
}
