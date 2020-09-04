#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int ara[1111111];
vector<int>v;
map<int,int>mp;
map<int,int>mp2;

int main()
{

    int n,i,flag,cntt,sum,x,a,tot,b;

    while(scanf("%d",&n)==1)
    {

        v.clear();
        mp.clear();
        mp2.clear();
        sum = 0;
        x = 0;
        tot = 0;
        cntt = 0;
        flag = 0;


        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1; i<=n; i++)
        {
            if(ara[i]>0)
            {
                if(ara[i]>0&&mp.find(ara[i])==mp.end())
                {
                    mp[ara[i]] = 1;
                    mp2[ara[i]] = 1;
                    sum++;
                    x++;
                }
                else
                {
                    flag = 1;
                    break;
                }

            }
            else
            {
                if(mp2.find(-ara[i])==mp2.end())
                {
                    flag = 1;
                    break;
                }
                else
                {
                     mp2.erase(-ara[i]);
                    x++;
                    sum--;
                }

                if(sum==0)
                {
                    v.push_back(x);
                    x = 0;
                    mp.clear();
                }


            }

        }




        if(flag==1||mp.size()>0)
        {
            printf("-1\n");
        }
        else
        {
            x = v.size();
            printf("%d\n",x);

            for(i=0; i<x; i++)
            {
                printf("%d ",v[i]);

            }
            printf("\n");
        }
    }










    return 0;
}
