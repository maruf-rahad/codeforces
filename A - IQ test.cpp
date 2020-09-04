#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x=0,y=0,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        if(m%2==0){
            x++;
            a=i;
        }
        else{
            y++;
            b=i;

        }
    }
    if(x>y){
        printf("%d\n",b);
    }else{
    printf("%d\n",a);
    }





return 0;
}
