#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(m==0&&n>1)
        {
            printf("No solution\n");
        }
        else
        {

            printf("%d",m);

            for(i=1; i<n; i++)
            {
                printf("0");
            }
            printf("\n");

        }
    }

    return 0;

}

