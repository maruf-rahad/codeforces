
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{

    int t,a,n,i;
    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(i=v.size()-1;i>=0;i--)
        {
            printf("%d ",v[i]);
        }
        printf("\n");
    }





return 0;
}
