#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum,total,x;
    scanf("%d %d %d",&a,&b,&c);
    sum=0;
    while(a!=0&&b!=0){
        sum=sum+2;
        a--;
        b--;
    }

    if(a==0){
        x=b;
    }
    if(b==0){
        x=a;
    }

    while(x!=0&&c!=0){
        sum=sum+2;
        x--;
        c--;
    }
    if(c>0){
        if(c%2==0){
            sum=sum+c;
        }
        else{
            c=c-1;
            sum=sum+c;
        }
    }
    printf("%d\n",sum);

return 0;
}
