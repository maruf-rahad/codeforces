#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n,m;
    while(scanf("%d %d",&n,&m)==2){
        int ara[n];
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+n);
        a=ara[m-1];
        if(m==0){
            if(ara[0]==1){
                printf("-1\n");
            }
            else{
                printf("1\n");
            }

        }
        else if(n==m){
            printf("%d\n",a);
        }
        else{
            if(ara[m-1]==ara[m]){
                printf("-1\n");
            }
            else{
                printf("%d\n",a);
            }
        }
    }
return 0;
}


