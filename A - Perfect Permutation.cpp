#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    while(scanf("%d",&n)==1)
    {
        if(n%2==1){
            printf("-1");
        }
        else if(n%2==0){

        printf("%d",n);

        for(i=n-1;i>=1;i--)
        {
            printf(" %d",i);
        }
    }

    printf("\n");
    }










return 0;
}


