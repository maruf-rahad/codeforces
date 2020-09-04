#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sw,n,i;
    int ara[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    int ma=ara[1];
    a=1;
    for(i=1;i<=n;i++){
        if(ara[i]>ma){
            ma=ara[i];
            a=i;
        }
    }
    int temp=ara[a],x=0;
    for(i=a-1;i>=1;i--){
        ara[i+1]=ara[i];
        x++;
    }
    ara[1]=temp;
    b=0;
    int mi=ara[1];
    for(i=1;i<=n;i++){
        if(ara[i]<=mi){
            mi=ara[i];
            b=i;
        }
    }
    x=x+(n-b);
    printf("%d\n",x);

    return 0;
}
