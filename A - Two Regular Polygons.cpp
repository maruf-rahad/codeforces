#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d %d",&n,&m);
            if(n%m==0)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }











return 0;
}
