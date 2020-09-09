#include<bits/stdc++.h>
using namespace std;
int ara[1120];
int main()
{
    int n,m,a,b,i,j,sum;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<=1115;i++)
        {
            ara[i] = 0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            ara[a]++;
        }
        a = *max_element(ara,ara+1110);

        if(n%2==0)
        {
            b = n/2;
        }
        else{
            b = n/2+1;
        }

        if(a<=b)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }










return 0;
}

