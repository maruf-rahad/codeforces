#include<bits/stdc++.h>
using namespace std;
int ara[100005];
vector<int>v1;
vector<int>v2;
int main()
{
    int n,m,a,b,i,j,x,y;
    while(scanf("%d",&n)==1)
    {
        v1.clear();


        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);

        }
        int sum = 1;
        for(i=2; i<=n; i++)
        {
            if(ara[i]==ara[i-1])
            {
                sum++;
            }
            else
            {
                if(ara[i-1]==2)
                {
                    v1.push_back(sum);
                }
                else
                {
                    v1.push_back(sum);
                }

                sum = 1;
            }
        }
        if(ara[n]==2)
        {
            v1.push_back(sum);
        }
        else
        {
            v1.push_back(sum);
        }
        int ma = -99,c;


        for(i=1; i<v1.size(); i++)
        {
            a = v1[i];
            b = v1[i-1];

            c = min(a,b);
            if(c>ma)
            {
                x = c;

                ma = c;
            }

        }
        if(v1.size()==1)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",x*2);
        }

    }


    return 0;
}

