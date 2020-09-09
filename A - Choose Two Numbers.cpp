#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s,s2,s3;
    int n,m,a,b,i,j,x,y;
    while(scanf("%d",&n)==1)
    {
        int mx = -99;
        int mx2 = -99;

        while(n--)
        {
            scanf("%d",&a);
            mx = max(mx,a);
        }
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&a);
            mx2 = max(mx2,a);
        }

        printf("%d %d\n",mx,mx2);
    }








return 0;
}

