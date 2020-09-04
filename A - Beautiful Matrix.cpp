#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,c,flag=0;
    int ara[6][6];
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(ara[i][j]==1){
                c=abs(i-3)+abs(j-3);
                flag=1;
                break;
            }
        }
        if(flag==1)break;
    }
    printf("%d\n",c);



return 0;
}
