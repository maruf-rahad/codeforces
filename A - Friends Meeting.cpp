#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,x,y,z;
    scanf("%d %d",&a,&b);
    n=abs(a-b);
    if(n%2==0){
        m=n/2;
        x=((m*(m+1))/2)*2;
    }else{
    m=n/2;
    y=(m*(m+1)/2);
    m=m+1;
    z=(m*(m+1)/2);
    x=y+z;
    }



    printf("%d\n",x);


return 0;
}
