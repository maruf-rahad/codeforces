#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,i;
    int ara[4];
    scanf("%d %d %d",&a,&b,&c);
    ara[0]=(a+b)*c;
    ara[1]=a*(b+c);
    ara[2]=a*b*c;
    ara[3]=a+b+c;
    x=ara[0];
    for(i=0;i<4;i++){
        if(ara[i]>x){
            x=ara[i];
        }
    }
    printf("%d\n",x);







return 0;
}
