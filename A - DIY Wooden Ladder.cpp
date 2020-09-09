#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,i,j,x,y,sum,a;

    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d",&m);
            v.clear();

            while(m--)
            {
                scanf("%d",&a);
                v.push_back(a);
            }
            sort(v.begin(),v.end());

            a = v.size();
            x = v[a-1];
            y = v[a-2];
            sum = 0;

            for(i=0;i<a-2;i++)
            {
                if(sum+1<min(x,y))
                {
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }







return 0;
}

