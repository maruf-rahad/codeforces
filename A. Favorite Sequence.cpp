#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y,flag;
    int ara[3333];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        i = 1;
        j = n;
        flag = 0;

        while(i<=j)
        {
            if(flag==0)
            {
                printf("%d ",ara[i++]);
                flag = 1;
            }
            else{
                printf("%d ",ara[j--]);
                flag = 0;
            }

        }
        printf("\n");

    }







return 0;
}
