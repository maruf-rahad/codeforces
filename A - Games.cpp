#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,sum,n;
    scanf("%d",&n);
    int ara[n+1];
    int ara2[n+1];
    for(i=1;i<=n;i++){
        scanf("%d %d",&ara[i],&ara2[i]);
    }
    sum=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(ara[i]==ara2[j]&&i!=j){
                sum=sum+1;
            }
        }
    }
    printf("%d\n",sum);

return 0;
}
