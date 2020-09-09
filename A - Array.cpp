#include<bits/stdc++.h>
using namespace std;
vector<int>p;
vector<int>m;
vector<int>z;
int main()
{
    int a,b,i,j,x,y,pelas,mainas,zero,n;


    while(scanf("%d",&n)==1)
    {
        p.clear();
        m.clear();
        z.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a>0)p.push_back(a);
            if(a<0)m.push_back(a);
            if(a==0)z.push_back(a);
        }
        printf("1 %d\n",m.back());
        m.pop_back();

        if(p.size()==0)
        {
            printf("2 %d",m.back());
            m.pop_back();
            printf(" %d\n",m.back());
            m.pop_back();
        }
        else{
            printf("1 %d\n",p.back());
            p.pop_back();
        }

        printf("%d",z.size()+p.size()+m.size());
        while(z.size()>0)
        {
            printf(" %d",z.back());
            z.pop_back();
        }
        while(p.size()>0)
        {
            printf(" %d",p.back());
            p.pop_back();
        }
        while(m.size()>0)
        {
            printf(" %d",m.back());
            m.pop_back();
        }
        printf("\n");
    }




return 0;
}

