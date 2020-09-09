#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,flag;


    while(scanf("%d",&n)==1)
    {
        flag = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i%j==0&&i*j>n&&i/j<n)
                {

                    printf("%d %d\n",max(i,j),min(i,j));
                    flag = 1;
                    break;
                }
            }
            if(flag==1)break;
        }
        if(flag==0)
        {
            printf("-1\n");
        }
    }





return 0;
}
