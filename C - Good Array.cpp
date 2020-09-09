#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main()
{
    int ara[200005];
    int ara2[200005];

    long long n,a,b,i,j,x,y,sum,total,mfirst,msecond;

    while(scanf("%lld",&n)==1)
    {
        v.clear();
        sum = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
            ara2[i] = ara[i];
        }
        sort(ara2+1,ara2+n+1);

        mfirst = ara2[n];
        msecond = ara2[n-1];
       // printf("%d %d\n",mfirst,msecond);
        for(i=1; i<=n; i++)
        {
           // printf("iter %d : \n",i);
            if(ara[i]!=mfirst)
            {
                total = sum-ara[i]-mfirst;
                //printf("total = %d  mfirst = %d\n",total,mfirst);
                if(total==mfirst)
                {
                   // printf("push %d\n",i);
                    v.push_back(i);
                }
            }
            else
            {
                total = sum-ara[i]-msecond;
               // printf("total = %d  m second = %d\n",total,msecond);
                if(total==msecond)
                {
                  //   printf("push %d\n",i);

                    v.push_back(i);
                }

            }
        }

        x = v.size();
        if(x == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%lld\n",x);
            printf("%lld",v[0]);
            for(i=1; i<v.size(); i++)
            {
                printf(" %lld",v[i]);
            }
            printf("\n");
        }




    }






    return 0;
}

