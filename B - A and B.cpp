#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
map<int,int>mp;
int main()
{
    ll a,b,i,j,x,y,n,t,m,sum,flag,z;
    string ah,bh;
    char str;

    scanf("%lld",&t);
    while(t--)
    {
        cin>>a>>b;

        if(a>b)
        {
            swap(a,b);
        }

        x = b-a;

        y = (sqrt(1+8*x)-1)/2;

        z = (y*(y+1))/2;
        if(z==x)
        {
            printf("%lld\n",y);
        }
        else
        {
            y++;
            z = (y*(y+1))/2;
            if((z-x)%2==0)
            {
                printf("%lld\n",y);
            }
            else
            {
                y++;
                z = (y*(y+1))/2;
                if((z-x)%2==0)
                {
                    printf("%lld\n",y);
                }
                else
                {
                    printf("%lld\n",y+1);
                }
            }
        }


    }


    return 0;
}
