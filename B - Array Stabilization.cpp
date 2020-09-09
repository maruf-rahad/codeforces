#include<bits/stdc++.h>
using namespace std;
    vector<int>v;
int main()
{
    int n,a,b,i,j;


    while(scanf("%d",&n)==1)
    {
        v.clear();


        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());



        a = v[n-2]-v[0];
        b = v[n-1]-v[1];

        printf("%d\n",min(a,b));
    }



return 0;
}

