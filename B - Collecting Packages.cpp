#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
struct nod{

    int first,second;
};
nod ara[1010];

bool cmp(nod a,nod b)
{
    if(a.first>b.first)
    {
        return false;
    }
    else if(a.first==b.first){
        if(a.second>b.second)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t,a,b,i,j,n;
    scanf("%d",&t);

    while(t--)
    {
        v.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            ara[i].first = a;
            ara[i].second = b;
        }

        sort(ara,ara+n,cmp);
        a = 0;
        b = 0;
        int flag = 0;
        for(i=0;i<n;i++)
        {
            if(ara[i].first>=a&&ara[i].second>=b)
            {
            v.push_back(make_pair(ara[i].first-a,ara[i].second-b));

            a = ara[i].first;
            b = ara[i].second;
            }
            else{
                flag = 1;
            }
        }

        if(flag==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");

            for(i=0;i<v.size();i++)
            {
                for(j=0;j<v[i].first;j++)
                {
                    printf("R");
                }
                for(j=0;j<v[i].second;j++)
                {
                    printf("U");
                }

            }
            printf("\n");
        }




    }













return 0;
}

