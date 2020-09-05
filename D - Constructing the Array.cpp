#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
set<pair<int,pair<int,int> > > s;
pair<int,pair<int,int> >p;
int ara[222222];
int main()
{
    int n,i,t;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            memset(ara,0,sizeof(ara));
            s.clear();
            s.insert({-n,{1,n}});
            for(i=1;i<=n;i++)
            {
                p = *s.begin();
                s.erase(s.begin());
                int mid = (p.S.F+p.S.S)/2;
                if(ara[mid]!=0);
                ara[mid] = i;

                s.insert({-abs(mid-p.S.F),{p.S.F,mid-1}});
                s.insert({-abs(p.S.S-(mid)),{mid+1,p.S.S}});

            }
            for(i=1;i<=n;i++)
            {
                printf("%d ",ara[i]);
            }
            printf("\n");

        }










return 0;
}
