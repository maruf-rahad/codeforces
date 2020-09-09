#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,i,sum;
   while(scanf("%d",&n)==1){
        sum=0;
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(b-a>=2){
            sum++;
        }
    }
    printf("%d\n",sum);
   }

return 0;
}

