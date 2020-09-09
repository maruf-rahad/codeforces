#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,a,b,i,j,x,y,flag,sum;
    while(scanf("%d",&n)==1)
    {
        v.clear();

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            v.push_back(a);

        }
        sum = 0;

        while(1)
        {
            flag = 0;
            for(i=0; i<v.size(); i++)
            {
                for(j=0; j<v.size(); j++)
                {
                    if(i==j)
                        continue;

                    if(v[i]!=v[j]&&v[i]>v[j])
                    {
                        v[i] = v[i] - v[j];
                        flag = 1;
                    }
                }


            }
            if(flag == 0)
            {
                break;
            }
        }
        for(i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        printf("%d\n",sum);
    }








    return 0;
}
