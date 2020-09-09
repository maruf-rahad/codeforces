#include<bits/stdc++.h>
using namespace std;
int ara[20],flag,n,total;

void dj(int total,int i)
{
   // printf("%d %d\n",i,total);
    if(flag==1)return;
    if(i>n)return;
    if((i==n&&total==0)||(i==n&&total%360==0))
    {
        flag = 1;
        return ;
    }
    dj(total+ara[++i],i);
    dj(total-ara[i],i);



}
int main()
{
    int a,b,i,j,sum,x,y;


    while(scanf("%d",&n)==1)
    {
        flag = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        i = 0;
        total = 0;
        dj(total,i);

        if(flag==1)
        {
            printf("YES\n");
        }
        else{
        printf("NO\n");
        }







    }





return 0;
}

