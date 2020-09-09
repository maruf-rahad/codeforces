#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v2;
    vector<int>v3;
    int n,m,a,b,i,j,x,y;
    while(scanf("%d %d",&n,&m)==2)
    {
        v.clear();
        v2.clear();
        v3.clear();
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        v2.push_back(v[0]);
        v3.push_back(0);
        int flag,flag2=0;
        if(v3.size()==m){
        flag2=1;
        }
        for(i=1;i<v.size();i++)
        {
            if(v3.size()==m){
                    flag2=1;
                break;
            }
            flag=0;
            for(j=0;j<v2.size();j++)
            {
                if(v[i]==v2[j])
                {
                    flag=1;
                }


            }
            if(flag==0)
            {
                v2.push_back(v[i]);
                v3.push_back(i);
            }
            if(v3.size()==m)
            {
                flag2=1;
                break;
            }
        }

        if(flag2==0){
            printf("NO\n");
        }
        else
        {
            printf("YES\n%d",v3[0]+1);
            for(i=1;i<v3.size();i++)
            {
                printf(" %d",v3[i]+1);
            }
            printf("\n");
        }

    }

    return 0;
}

