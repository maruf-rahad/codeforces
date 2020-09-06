#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[333333];
int ara2[333333];
int main()
{
    int t,n,m,a,b,i,j,x,y;
    string s;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        if(n==2)
        {
            if(ara[1]==ara[2]&&ara[1]==0)
            {
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
            continue;
        }
        ara[n+1] = -1;
        int k = 0;
        int flag = 0,flag2 = 0;

        for(i=1;i<=n;i++)
        {
            if(ara[i]>=k)
            {
                if(ara[i]>k)
                {
                    k++;
                    continue;
                }
                ara[i] = k;
                k++;
            }
            else{
                flag2 = 1;
                a = i;
                break;
            }
        }


       x = n-i;
     //  printf("%d %d %d %d\n",x,a,n,flag2);
    if(flag2==1)
    {

        for(i=a;i<=n;i++)
        {
           // printf("%d %d\n",ara[i],ara[i-1]);
            if((ara[i]<x)||(x==ara[i-1]))
            {
                flag =  1;
            }
            else{
                x--;
            }
        }
    }
   // printf("%d %d\n",flag2,flag);
        if(flag2==0||flag==0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }




    }










return 0;
}
