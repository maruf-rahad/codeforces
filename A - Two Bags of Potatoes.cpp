#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y,sum,k;

    while(scanf("%d %d %d",&y,&k,&n)==3)
    {

        if(y%k==0)
        {
            i = y+k;
        }
        else{
            i = (y/k)*k+k;
        }
        int flag = 0;

        while(i<=n)
        {
            flag = 1;
            printf("%d ",i-y);
            i = i+k;
        }
        if(flag==0)printf("-1");
        printf("\n");
    }









return 0;
}

