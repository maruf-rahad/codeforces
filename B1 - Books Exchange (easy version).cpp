#include<bits/stdc++.h>
using namespace std;
int visited[3333];
int ara[3333];
int main()
{
    int t,a,b,i,j,x,y,sum,n;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=n;i++)
        {
            x = ara[i];
            if(ara[i]==i){
                    printf("1 ");
                    continue;
            }
            sum = 0;
            while(1)
            {
                sum++;
              //  printf("%d\n",x);
                if(i==ara[x])break;
                x = ara[x];
            }

            printf("%d ",sum+1);


        }
        printf("\n");
    }











return 0;
}

