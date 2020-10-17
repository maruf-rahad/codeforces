#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[40];
int main()
{
    char ch[111111];

    ll i,a,b,j,sum;

    while(scanf("%s",&ch)==1)
    {
        for(i=0;i<=38;i++)
        {
            ara[i] = 0;
        }
        int sz = strlen(ch);

        for(i=0;i<sz;i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
            {
                a = ch[i] - 96;
                ara[a] = ara[a] + 1;
            }
            else if(ch[i]>='0'&&ch[i]<='9')
            {
                a = ch[i] - 48 + 27;
                ara[a]++;
            }
        }

        sum = 0;

        for(i=1;i<=36;i++)
        {
            sum = sum + ara[i]*ara[i];
        }

        printf("%lld\n",sum);

    }


return 0;
}
