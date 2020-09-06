#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,j,x,y,n,m,sum,flag;
    string s;
    while(scanf("%d",&t)==1)
    {


        while(t--)
        {
            scanf("%d",&n);
            cin>>s;
            x = 0;
            sum = 0;
            flag = 0;
            for(i=0; i<n; i++)
            {
                if(s[i]=='A')
                {
                    flag=1;
                     sum = 0;
                }
                else if(flag)
                {
                    sum++;
                      x = max(x,sum);
                }
            }
            if(flag)
                x = max(x,sum);
            printf("%d\n",x);
        }

    }










    return 0;
}
