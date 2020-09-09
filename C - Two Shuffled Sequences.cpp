#include<bits/stdc++.h>
using namespace std;
int ara[200005];
int n = 200002;
vector<int>v1;
vector<int>v2;
void zero()
{
    for(int i = 0;i<=n;i++)
    {
        ara[i] = 0;
    }
}
int main()
{
    int m,a,b,i,j,flag;
    while(scanf("%d",&m)==1)
    {
        zero();
        flag = 1;

        v1.clear();
        v2.clear();
        for(i=1;i<=m;i++)
        {
            scanf("%d",&a);
            ara[a]++;
        }
        a = 0;
        b = 0;
        flag = 0;
        for(i=0;i<=n;i++)
        {
            if(ara[i]>2)
            {

                flag = 1;
                break;
            }
            else if(ara[i]==2)
            {
                v1.push_back(i);
                v2.push_back(i);
                a++;
                b++;
            }
            else if(ara[i]==1)
            {
                v1.push_back(i);
                a++;
            }
        }
        if(flag==1)
        {
            printf("No\n");
        }
        else{
                printf("YES\n");
            printf("%d\n",a);
            for(i=0;i<a;i++)
            {
                printf("%d ",v1[i]);
            }
            printf("\n%d\n",b);
            for(i=b-1;i>=0;i--)
            {
                printf("%d ",v2[i]);
            }
            printf("\n");
        }


    }









return 0;
}

