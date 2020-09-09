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
    for(i=n-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            if(i!=j){
                if(ara[i]==ara[j]){
                    ara[j]=0;
                }
            }
        }
    }
    a=0;
    int sum=0;
    for(i=0;i<n;i++){
        if(ara[i]!=0)sum++;
    }
    printf("%d\n",sum);
    for(i=0;i<n;i++){
        if(ara[i]!=0){
                if(a==0){
            printf("%d",ara[i]);
            a=1;
            }
            else{
                printf(" %d",ara[i]);
            }
        }
    }
    printf("\n");

return 0;
}

