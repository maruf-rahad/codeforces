#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>v;
    long long a,b,i,j,x,y,sum,sub,sec,n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        v.clear();
        sum = 0;
        sub = 0;
        sec = 0;
        for(i=1;i<=n;i++)
        {
        scanf("%lld %lld",&a,&b);
        sum = sum+a;
        x = a-b;
        sec = sec+b;
        sub = sub+x;
        v.push_back(x);
        }
        if(sum<=m){
            printf("0\n");
        }
        else if(sec>m)
        {
            printf("-1\n");
        }
        else{

            sort(v.begin(),v.end());

            a = 0;

            for(i=v.size()-1;i>=0;i--)
            {
                sum = sum-v[i];
                a++;
                if(sum<=m){
                    break;
                }
            }
            printf("%lld\n",a);

        }


    }








return 0;
}

