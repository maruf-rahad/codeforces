#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&m,&a,&b);

        if(abs(n-m)%abs(a+b)==0)
        {
            printf("%d\n",abs(n-m)/(a+b));
        }
        else{
            printf("-1\n");
        }
    }










return 0;
}
