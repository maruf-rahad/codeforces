#include<bits/stdc++.h>
using namespace std;
vector< pair < int ,int > >v;
vector < int > v2;
int main()
{
    int n,a,b,i,j,m;

    while(scanf("%d %d",&n,&m)==2)
    {
        v2.clear();
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(make_pair(a,i));
        }
        sort(v.begin(),v.end());

        b = v.size()-1;
        int sum = 0;

        for(i=1;i<=m;i++)
        {
            a = v[b].second;
            v2.push_back(a);
            sum+=v[b].first;
                b--;

        }

        sort(v2.begin(),v2.end());
        v2.pop_back();
        v2.push_back(n);


        printf("%d\n%d",sum,v2[0]);
        for(i=1;i<v2.size();i++)
        {
            cout<<" "<<v2[i]-v2[i-1];
        }

        cout<<endl;

    }



    return 0;
}

