#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a!=c&&b!=d){
        if(abs(a-c)!=abs(b-d)){
            printf("-1\n");
        }else{
        printf("%d %d %d %d\n",a,d,c,b);
        }
    }
    else if(a==c){
            x=abs(b-d);
        printf("%d %d %d %d\n",a+x,b,a+x,d);
    }
    else if(b==d){
        x=abs(a-c);
        printf("%d %d %d %d\n",a,b-x,c,b-x);
    }else{
    printf("-1\n");
    }

return 0;
}
