#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
int main()
{
    int n,a,b,i,j,sum;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        v2.clear();

        int flag = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            if(a==1)flag = 1;

            v.push_back(a);
        }

        int sum = 1;

        for(i=1; i<v.size(); i++)
        {
            if(v[i]==1&&v[i]==v[i-1])
            {
                sum++;
            }
            else
            {
                v2.push_back(sum);
                sum = 1;
            }
        }
        if(v[n-1]==1)
        {
            v2.push_back(sum);
        }

        if(flag == 1)
        {

            if(v[0]==1&&v[n-1]==1)
            {
                a = v2[0];
            }
            else
            {
                a = 0;
            }

            b = v2.size();
            v2[b-1] = v2[b-1]+a;
            a = *max_element(v2.begin(),v2.end());

        }
        if(flag==1)
            printf("%d\n",a);
        else
            printf("0\n");

    }







    return 0;
}

