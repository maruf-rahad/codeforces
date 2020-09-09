#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,a,b,i,j,x,y,sum;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        x = 1e9+5;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        for(i=0;i<n;i++)
        {
            sum = 0;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(abs(v[i]-v[j])%2==1)
                    {
                        sum+=1;
                    }
                }
            }
            x = min(sum,x);

        }

        printf("%d\n",x);

    }










return 0;
}

