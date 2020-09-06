#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a,b,n,m,t,x,y,flag,flag2,mx,mn,sum,total;
    string s,s2;
    char str;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum = 0;
        while(1)
        {
            a = n%10;
            sum+=(n/10)*10;
            n/=10;
            if(n==0)break;
            n+=a;
        }
        sum+=a;

        printf("%d\n",sum);

    }










return 0;
}
