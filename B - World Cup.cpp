#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,m,c,d,i,j,x,y;
    int ara[1000];
    scanf("%d %d %d",&n,&a,&b);
    for(i=1;i<=n;i++){
        ara[i]=i;
    }
    c=n/2;
    int flag=0;
    int z=0;
    while(c>=1&&flag==0){
            z++;
        x=1;
        y=1;
        for(i=1;i<=c;i++){
            if(c==1){
                printf("Final!\n");
                flag=1;
                break;
            }
               else if((ara[x]==a&&ara[x+1]==b)||(ara[x]==b&&ara[x+1]==a)){
                flag=1;
                printf("%d\n",z);
                break;
               }
                else if(ara[x]==a||ara[x+1]==a){
                    ara[y]=a;
                }
                else if(ara[x]==b||ara[x+1]==b){
                    ara[y]=b;
                }
                else{
                ara[y]=ara[x];
                }
                x=x+2;
                y++;

        }
        c=c/2;
    }






return 0;
}
