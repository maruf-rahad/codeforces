#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,j,x,y;
    scanf("%d %d",&n,&a);
    int ara[n+1];
    int ara2[n];
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }

    for(i=1;i<n;i++){
        ara2[i]=ara[i]-ara[i+1]-a;
    }
    x=ara2[1];;
    for(i=1;i<n;i++){
        if(ara2[i]>x){
            x=ara2[i];
        }
    }
    if(x>=0){
        printf("%d\n",x);
    }else{
    printf("0\n");
    }






return 0;
}
