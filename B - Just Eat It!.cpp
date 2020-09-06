#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[200010];

int main()
{
    char ch;
    string s,s2;
    ll t,n,m,a,b,i,j,x,y,sum,tot,flag,flag2;
    scanf("%lld",&t);

    while(t--)
    {
        flag = 0;
        flag2 = 0;
        sum = 0;
        tot = 0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            if(i==1)
            {
                a = ara[i];
            }
            else if(i==n)
            {
                b = ara[i];
            }
            sum+=ara[i];
        }
        if(sum-a>=sum)
        {
            flag = 1;
        }
        else if(sum-b>=sum)
        {
            flag = 1;
        }
        else{
            i = 1;

            while(flag==0&&i<=n)
            {
                tot+=ara[i];
                if(tot>=sum&&flag2==1)
                {
                    flag = 1;
                    break;
                }
                if(tot>=sum&&i!=n)
                {
                    flag = 1;
                    break;
                }

                if(tot<=0)
                {
                    flag2 = 1;
                    tot = 0;
                }
                i++;
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }




    }









return 0;
}

