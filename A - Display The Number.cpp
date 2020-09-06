#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);

        if(n%2==0)
        {
            n=n/2;
            while(n--)
            {
                printf("%d",1);
            }
        }
        else
        {
             printf("7");
            n = (n-3)/2;
            while(n--)
            {
                printf("%d",1);
            }

        }
        printf("\n");
    }












return 0;
}
