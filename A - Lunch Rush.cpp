#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,m,x,y;
    scanf("%d %d",&n,&m);
    int ara[n+1];
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(b>m){
            x=a-(b-m);
        }
        else{
            x=a;
        }
        ara[i]=x;
    }
    int h=ara[1];
    for(i=1;i<=n;i++){
        if(ara[i]>h){
            h=ara[i];
        }
    }
    printf("%ld\n",h);







return 0;
}

