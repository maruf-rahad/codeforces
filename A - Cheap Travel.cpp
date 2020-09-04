#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,n,m,z,c,d;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    x=n%m;

    y=(n/m)*b;
    z=x*a;
    if(z<b){
        y=y+z;
    }else{
    y=y+b;
    }
    c=a*n;
    if(c<y){
        y=c;
    }
    printf("%d\n",y);



return 0;
}
