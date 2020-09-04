#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,x,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            scanf("%d",&x);
            if(j==1){
                a=a+x;
            }else if(j==2){
            b=b+x;
            }else if(j==3){
            c=c+x;
            }
        }
    }
    if(a==0&&b==0&&c==0){
        printf("YES\n");
    }else{
    printf("NO\n");
    }

return 0;
}
