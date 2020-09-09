#include<bits/stdc++.h>
using namespace std;
vector<int >v;
int main()
{
    int n,a,b,i,j,x,y,flag;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        scanf("%d",&a);
        v.push_back(a);
        flag = 0;
        for(i=2;i<=2*n;i++)
        {
            scanf("%d",&b);
             v.push_back(b);
            if(a!=b)
            {
                flag  = 1;
            }
            a = b;

        }
        if(flag==0)
        {
            printf("-1\n");
        }
        else{
            sort(v.begin(),v.end());
            for(i=0;i<2*n;i++)
            {
                printf("%d ",v[i]);
            }
            printf("\n");

        }


    }









return 0;
}

