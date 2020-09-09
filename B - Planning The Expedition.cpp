#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int ara[120];
    int ara2[120];
    int n,a,i,j,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        v.clear();
        for(i=0;i<110;i++)
        {
            ara[i] = 0;
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d",&a);
            ara[a]++;

        }
        int flag = 0, sum = 0,b = 0;

        for(i=1;i<=105;i++)
        {
            if(ara[i]>0)
            {
                v.push_back(ara[i]);
            }
        }
        for(i=1;i<=100;i++)
        {
            sum = 0;
            for(j=0;j<v.size();j++)
            {
                a = v[j]/i;
                if(a>0)
                {
                    sum+=a;
                }
            }
            if(sum>=n)
            {
                flag = 1;

                    b = i;



            }
        }
        if(flag == 1)
        {
            printf("%d\n",b);
        }
        else{
            printf("0\n");
        }

    }







return 0;
}

