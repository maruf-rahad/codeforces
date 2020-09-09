#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
    int m,n,a,b,i,j,sum;
    string s;
    while(scanf("%d %d",&n,&m)==2)
    {
       int ara[n+1];
        for(i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
            ara[i] = 0;
        }
        ara[i] = 0;
        for(i=0; i<m; i++)
        {
            int flag = 0;
            int ma = -9;
            for(j=0; j<n; j++)
            {
                a = v[j][i] - '0';
                if(a>ma)
                {
                    ma = a;
                }

            }

            for(j=0;j<n;j++)
            {
                a = v[j][i] - '0';
                if(a==ma)
                {

                    ara[j+1]++;
                }
            }


        }
        sum = 0;
        for(i=1;i<=n;i++)
        {
            if(ara[i]>0)
                sum++;
        }
        printf("%d\n",sum);


    }






    return 0;
}

