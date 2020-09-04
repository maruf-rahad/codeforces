#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,n;
    scanf("%d",&n);
    x=(n/7)*2;
    b=x;
    if((n%7)==1){
        b=x+1;
    }
    else if(n%7>=2){
        b=x+2;
    }
    if(n%7==6){
        x=x+1;
    }
    printf("%d %d\n",x,b);
return 0;
}
