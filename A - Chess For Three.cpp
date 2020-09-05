#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,a,b,c,i,j,x,y,sum,mn,mx,t;
    string s;

    int flag = 0;
    while(scanf("%d",&n)==1)
    {
        a = 1;
        b = 2;
        c = 0;
        int flag = 0;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            if(x==a&&a>0&&b>0)
            {
                b = 0;
                c = 3;
            }
            else if(x==b&&a>0&&b>0)
            {
                a = 0;
                c = 3;

            }
              else if(x==a&&a>0&&c>0)
            {
                c = 0;
                b = 2;

            }
              else if(x==c&&a>0&&c>0)
            {
                a = 0;
                b = 2;

            }
              else if(x==c&&b>0&&c>0)
            {
                b = 0;
                a = 1;

            }
              else if(x==b&&b>0&&c>0)
            {
                c = 0;
                a = 1;

            }
            else flag = 1;
        }
        if(flag==0)
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }











return 0;
}
