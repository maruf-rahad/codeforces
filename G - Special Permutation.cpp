#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main()
{
    int t,n,sum,x,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<=3){printf("-1\n");
        continue;
        }
        else if(n==4)
        {
            printf("3 1 4 2\n");
            continue;
        }

        v.clear();
        int flag = 0;
        sum  = 0;
        v.push_back(1);
        i = 3;
        j = 2;
        while(i<=n||j<=n)
        {
            if(sum<=1&&i<=n)
            {
                v.push_back(i);
                i+=2;
                sum++;
            }
            else if(j<=n){
                v.push_back(j);
                j+=2;
                sum++;
            }
            else sum++;
            if(sum==4)
            {
                sum = 0;
            }
        }
        x = v.size();
        if(abs(v[x-2]-v[x-3])<=1)
        {
            i = v.back();
            v.pop_back();
            j = v.back();
            v.pop_back();
            k = v.back();
            v.pop_back();
            int l = v.back();
            v.pop_back();
            v.push_back(j);
            v.push_back(i);
            v.push_back(l);
            v.push_back(k);

        }
        if(abs(v[x-1]-v[x-2])<=1)
        {
            i = v.back();
            v.pop_back();
            j = v.back();
            v.pop_back();
            k = v.back();
            v.pop_back();

            v.push_back(i);
            v.push_back(k);
            v.push_back(j);

        }
        for(i=0;i<x;i++)printf("%d ",v[i]);

        printf("\n");
    }











return 0;
}
