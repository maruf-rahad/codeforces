#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,sum;
    while(scanf("%d %d",&n,&m)==2){

        printf("%d ",min(n,m));

        printf("%d\n",(max(n,m)-min(n,m))/2);

    }

return 0;
}
