#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,w1=0,w2=0,dr=0,x,y,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=6;i++){
        x=abs(a-i);
        y=abs(b-i);
        if(x<y){
            w1=w1+1;
        }else if(x>y){
        w2=w2+1;
        }else{
        dr=dr+1;
        }
    }
    printf("%d %d %d\n",w1,dr,w2);









return 0;
}
