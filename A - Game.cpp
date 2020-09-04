#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    sort(ara,ara+n);

    if(n%2==1){
            a=n/2;
        printf("%d\n",ara[a]);
    }
    else{
        a=(n-1)/2;
        printf("%d\n",ara[a]);
    }

return 0;
}
