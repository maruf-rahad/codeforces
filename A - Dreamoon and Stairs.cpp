#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,sum,n,m;
    scanf("%d %d",&n,&m);
        if(n%2==0){
            a=n/2;
        }
        else{
            a=n/2+1;
        }
        b=n/2;
        sum=a;
        int flag=0;
        while(b>=0){
            if(sum%m==0&&sum>=m){
                flag=1;
                break;
            }else{
            sum++;

            b--;
            }
        }
        if(flag==1){
            printf("%d\n",sum);
        }else{
        printf("-1\n");
        }

return 0;
}
