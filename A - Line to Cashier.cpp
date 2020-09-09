#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
int main()
{
    int n,m,a,b,i,j;
    while(scanf("%d",&n)==1)
    {
        v.clear();
        v2.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        for(i=0;i<n;i++)
        {
            int sum = 0;

            for(j=0;j<v[i];j++)
            {
                scanf("%d",&a);
                sum+=a*5;
            }

            v2.push_back(sum+v[i]*15);
        }

       a  = *min_element(v2.begin(),v2.end());

       printf("%d\n",a);








    }




return 0;
}

