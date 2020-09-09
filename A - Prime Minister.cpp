#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
int main()
{

    int n,a,b,i,j,x,y,sum,flag;
    vector<int>v2;

    while(scanf("%d",&n)==1)
    {
        sum = 0;
        flag = 0;
        cin>>b;
        sum+=b;
        x = b;
        v.clear();
        v2.clear();
        v2.push_back(1);
        for(i=2; i<=n; i++)
        {
            scanf("%d",&a);
            v.push_back(make_pair(a,i));
            sum+=a;
        }
        sort(v.begin(),v.end());

        for(i=0; i<v.size(); i++)
        {


            if(x>=2*v[i].first)
            {
                b+=v[i].first;
                v2.push_back(v[i].second);
            }
            if(b*2>sum)
            {
                flag = 1;
                break;
            }

        }

        if(flag == 1)
        {
            printf("%d\n",v2.size());
            for(i=0;i<v2.size();i++)
            {
                printf("%d ",v2[i]);
            }
            printf("\n");
        }
        else{
            printf("0\n");
        }




    }










    return 0;
}

