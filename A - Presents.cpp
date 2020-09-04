#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n;
    scanf("%d",&n);
    int ara[n+1];
    int ara2[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++){
        a=ara[i];
        ara2[a]=i;
    }
    printf("%d",ara2[1]);
    for(i=2;i<=n;i++){
        printf(" %d",ara2[i]);
    }
    printf("\n");



return 0;
}
