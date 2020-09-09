#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>pos;
vector<int>neg;

int main()
{
    string s,s2,s3;
    ll n,m,a,b,i,j,x,y,z,sum;

    while(scanf("%lld",&n)==1)
    {
        pos.clear();
        neg.clear();
        z = 0;
        sum = 0;

        while(n--)
        {
            scanf("%lld",&a);
            if(a>0)
            {
                sum = sum+(a-1);
            }
            else if(a<0)
            {
                neg.push_back(a);
            }
            else{
                    z++;
                sum+=1;
            }
        }
        x = neg.size();
            for(i=0;i<x;i++)
            {
                sum = sum+(abs(neg[i])-1);
            }
            if(x%2==1&&z==0)
            {
                sum+=2;
            }

            printf("%lld\n",sum);





    }








return 0;
}

