#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,sum,w,k;
    sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++){
            b=i*k;
            sum=sum+b;

    }
    sum=sum-n;
    if(sum>=0){
    printf("%d\n",sum);
    }
    else{
        printf("0\n");
    }



return 0;
}
