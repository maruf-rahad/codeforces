#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,sum,m;
    scanf("%d %d",&n,&m);
    sum=0;
    for(i=1;i<=n;i++){
            scanf("%d",&a);
        sum=sum+a;
    }
    int mi=sum+(10*(n-1));
    if(mi>m){
        printf("-1\n");
    }
    else{
    printf("%d\n",(m-sum)/5);
    }

return 0;
}
