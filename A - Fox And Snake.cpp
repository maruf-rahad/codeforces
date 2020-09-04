#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j;
    scanf("%d %d",&n,&m);
    int flag=0;
    for(i=1;i<=n;i++){

            if(i%2==1){
                for(j=1;j<=m;j++){
                    printf("#");
                }
                printf("\n");
            }
            else{
                if(flag==0){
                for(j=1;j<m;j++){
                    printf(".");
                }
                printf("#\n");
                flag=1;
            }
            else{
                printf("#");
                for(j=1;j<m;j++){
                    printf(".");
                }
                printf("\n");
                flag=0;
            }

            }
    }

return 0;
}
