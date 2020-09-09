#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j;

    while(scanf("%d %d %d",&a,&b,&n)==3)
    {
        if(a>b+n)
        {
            printf("+\n");
        }
        else if(b>a+n)
        {
            printf("-\n");
        }
        else if(a==b&&n==0)
        {
            printf("0\n");
        }
        else
            printf("?\n");


    }









return 0;
}

