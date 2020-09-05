#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);

        n = abs(n-m);

        printf("%d\n",n/5+(n%5)/2+((n%5)%2));
    }











return 0;
}
