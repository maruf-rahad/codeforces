#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y;


    while(scanf("%d",&n)==1)
    {
        int sum = 0;
        int sub = 0;
        while(n--)
        {
            scanf("%d",&a);

            if(a>=0)sum+=a;

            else sum+=-a;

        }
        printf("%d\n",sum);

    }










return 0;
}
