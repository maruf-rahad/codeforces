#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,i,j,x,y,a;

        scanf("%d",&n);
        v.clear();
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
            printf("%d ",v[n-1]);
            a = v[n-1];

            for(i=n-1;i>0;i--)
            {
                if(v[i]==v[i-1])
                {
                    printf("%d\n",v[i]);
                    break;
                }
                else if(a%v[i]!=0)
                {
                    printf("%d\n",v[i]);
                    break;
                }
            }









return 0;
}

