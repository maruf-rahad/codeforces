#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
    int n,m,a,b,i,j,x,y,sum,mn,mx,t,h1,h2,h=2,a1,a2,c1;
    string s;

    int flag = 0;
    while(scanf("%d %d %d",&h1,&a1,&c1)==3)
    {
        v.clear();
        scanf("%d %d",&h2,&a2);
        while(1)
        {


            if(h2<=a1)
            {
                v.push_back("STRIKE");
                break;
            }
            else if(h1>a2)
            {
                v.push_back("STRIKE");
                h2-=a1;
                h1-=a2;
            }
            else{
                v.push_back("HEAL");
                h1+=c1;
                h1-=a2;
            }

        }
        printf("%d\n",v.size());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }

    }











    return 0;
}
