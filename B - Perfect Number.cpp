#include<bits/stdc++.h>
using namespace std;
int ara[10000];
int main()
{
    int i=1,j,n,a,b,sum,total=0;
    while(scanf("%d",&n)==1){
        while(total!=n){
           a=i;
           sum=0;
           while(a!=0){
            sum=sum+a%10;
            a=a/10;
           }
           if(sum==10){
            total++;
            b=i;
           }
           i++;
        }
        printf("%d\n",b);
    }

return 0;
}
