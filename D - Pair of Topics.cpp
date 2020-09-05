#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara2[200010];
int ara3[200010];
int ara[200010];

int binary_search(int x,int low,int high)
{

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(ara[mid]>x)
        {
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return high+1;
}
int main()
{
    ll n,m,a,b,i,j,x,y,sum,mid;

    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara2[i]);
        }
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara3[i]);
        }
        for(i=1; i<=n; i++)
        {
            ara[i] = ara2[i]-ara3[i];
        }

        sort(ara+1,ara+n+1);
        sum = 0;
        for(i=1; i<=n-1; i++)
        {
            if(ara[i]<=0)
            {
                x =  binary_search(abs(ara[i]),i,n);
                if(x<=n)
                    sum+=(n-x)+1;
            }
            else{
                sum+=n-i;
            }
        }

        printf("%lld\n",sum);


    }












    return 0;
}
