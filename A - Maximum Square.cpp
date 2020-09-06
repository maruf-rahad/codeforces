#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,i,j,t,x,y,a,b,sum;
 
    while(scanf("%d",&t)==1)
    {
 
        while(t--)
        {
            v.clear();
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                scanf("%d",&a);
                v.push_back(a);
            }
 
            sort(v.begin(),v.end());
 
            sum = 0;
            j = 1;
            for(i=v.size()-1;i>=0;i--)
            {
                if(v[i]>=j)
                {
                    j++;
                    sum++;
                }
                else break;
            }
            printf("%d\n",sum);
        }
    } 
return 0;
}