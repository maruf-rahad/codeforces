#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,a,b,i,j,x,y,t,sum;


    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&n);
        v.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        int mn = v[n-1];

        for(i=n-2;i>=0;i--)
        {
            if(v[i]>mn)
            {
                sum++;
            }
            else{
                mn = v[i];
            }
        }

        printf("%d\n",sum);
    }
















return 0;
}

