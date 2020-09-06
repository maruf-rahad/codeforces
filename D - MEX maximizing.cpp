#include<bits/stdc++.h>
using namespace std;
int ara[500000];
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag,k=0;
    sum = 0;
    scanf("%d %d",&n,&m);
    while(n--)
    {
        scanf("%d",&a);
        ara[a%m]++;

        while(ara[sum%m]>0)
        {
            ara[sum%m]--;
            sum++;
        }
        while(ara[sum]!=0)sum++;

        printf("%d\n",sum);

    }










    return 0;
}
