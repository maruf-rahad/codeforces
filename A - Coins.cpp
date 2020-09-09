#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;

    while(scanf("%d %d",&n,&a)==2)
    {
            if(a%n==0)
            {
                printf("%d\n",a/n);
            }
            else{
                printf("%d\n",a/n+1);
            }


    }



}

