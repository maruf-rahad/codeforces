#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,flag=0,i,sum=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+86400-a;
        if(sum>=m&&flag==0){
                printf("%d\n",i);
            flag=1;
        }
    }

return 0;
}
