#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,a,b,i,j,c,d,sum;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        int ara[n+1];
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        if(n==1)
        {
            printf("0\n");
        }
        else if(n==2)
        {
            if((abs(ara[2]-ara[1])==1&&ara[1]==1)||(abs(ara[2]-ara[1])==1&&ara[n]==1000))
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }

        else
        {
            for(i=2; i<=n; i++)
            {
                v.push_back(ara[i]-ara[i-1]);
                // printf("%d ",v[i-2]);
            }
            //   cout<<endl;
            sum = 0;
            b = 0;
            for(i=1; i<v.size(); i++)
            {
                if(v[i]==1&&v[i-1]==1)
                {
                    sum++;
                    if(sum>b)
                    {
                        b = sum;
                    }
                    continue;
                }
                sum = 0;

            }
            // printf("%d\n",b);
            int flag = 0;
            sum = 0;
            a = abs(ara[2]-ara[1]);
            if(a==1)
            sum = 1;
            for(i=3; i<=b+2; i++)
            {
                if(ara[i]-ara[i-1]==a&&a==1)
                {
                    sum++;
                }
            }
            if(sum==b+1&&ara[1]==1)
            {
                flag = 1;
            }


            if(flag!=1)
            {
                a = abs(ara[n]-ara[n-1]);
                // printf("%d\n",a);
                if(a==1)
                {
                sum = 1;
                }
                for(i=n-2; i>=n-(b+1); i--)
                {
                    c = abs(ara[i]-ara[i+1]);
                    // printf("%d ",c);
                    if(c==1&&a==1)
                    {

                        sum++;
                    }
                }
                if(sum == b+1&&ara[n]==1000)
                {
                    flag = 1;
                }
            }
             //  printf(" flag = %d  %d  %d  %d\n",flag,sum,ara[n],b);


            if(flag == 1)
            {
                printf("%d\n",b+1);
            }
            else
            {
                printf("%d\n",b);
            }


        }

    }

    return 0;
}
