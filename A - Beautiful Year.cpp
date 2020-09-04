#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,j,x,sum;
    int ara[15];
    scanf("%d",&n);
    for(i=n+1;;i++){
        for(j=0;j<=9;j++){
            ara[j]=0;
        }
        int s=i;
        x=1;
        while(s!=0){
            a=s%10;
            ara[a]++;
            x++;
            s=s/10;
        }
        sum=0;
        for(j=0;j<=9;j++){
            if(ara[j]==0){
                sum++;
            }
        }
        if(sum==6){
            break;
        }
    }
    printf("%d\n",i);

    return 0;
}
