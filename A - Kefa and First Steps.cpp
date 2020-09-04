#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n,flag,sum=0,c;
    scanf("%d",&n);
    flag=0;
     b=0;
    int total=0;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>=b){
            sum++;
            b=a;
        }
        else{
            if(sum>total){
            total=sum;
            }
            b=a;
            sum=1;
        }
    }
     if(sum>total)
        {
            total=sum;
        }
     printf("%d\n",total);
    return 0;
}
