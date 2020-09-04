#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n,sum;
    int ara[620];
    scanf("%d",&n);
    for(i=0;i<610;i++){
        ara[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a);
        ara[a]++;
    }
    sum=0;
    for(i=1;i<610;i++){
        if(ara[i]>0){
            sum=sum+1;
        }
    }
    printf("%d\n",sum);

return 0;
}
