#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int a,b,i,j,x,y,flag,sum,n;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        int temp = v[n-1];
        v[n-1] = v[n-2];
        v[n-2] = temp;
        flag = 0;
        for(i=1;i<n-1;i++)
        {
            if((v[i-1]+v[i+1])<=v[i])
            {
                flag = 1;
            }
        }
        if(v[n-2]+v[0]<=v[n-1])flag = 1;

        if(flag == 0)
        {
            printf("YES\n");
            for(i=0;i<v.size();i++)
            {
                printf("%d ",v[i]);
            }
        }
        else{
            printf("NO");
        }

        printf("\n");
    }






return 0;
}

