#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n,sum;
    sum=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
        a=sum/2;


    sort(ara,ara+n);
    b=0;
    c=0;
    for(i=n-1;i>=0;i--){
            b=b+ara[i];
            c++;
            if(b>a){
                break;
            }

    }
    printf("%d\n",c);


return 0;
}
