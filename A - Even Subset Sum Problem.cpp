#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,m,a,b,i,j,x,y,sum,flag;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        flag = 0;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a%2==0)
            {
                flag = 1;
                b = i;
            }

            if(a%2==1&&sum==0)
            {
                sum++;
                x = i;
            }
            else if(sum==1&&a%2==1)
            {
                y = i;
                sum++;
                flag = 2;
            }

        }
        if(flag==0)
        {
            printf("-1\n");
        }
        else if(flag==1){
            printf("1\n%d\n",b);
        }
        else if(flag==2)
        {
            printf("2\n%d %d\n",x,y);
        }
    }










return 0;
}
