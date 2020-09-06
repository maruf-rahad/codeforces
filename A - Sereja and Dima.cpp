#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1100];
    int n,m,a,b,i,j,x,y,sum,sum2,k;
 
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        i = 1;
        j = n;
        k = 1;
        sum = 0;
        sum2 = 0;
 
        while(i<=j)
        {
            if(k%2==1)
            {
                if(ara[i]>=ara[j])
                {
                    sum+=ara[i];
                    i++;
                }
                else{
                    sum+=ara[j];
                    j--;
                }
            }
            else{
                if(ara[i]>=ara[j])
                {
                    sum2+=ara[i];
                    i++;
                }
                else{
                    sum2+=ara[j];
                    j--;
                }
            }
            k++;
        }
        printf("%d %d\n",sum,sum2);
    }
return 0;
}