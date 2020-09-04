#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,m,c,d,x,y;
    scanf("%d %d",&n,&m);
    int ara[m];
    for(i=0;i<m;i++){
        scanf("%d",&ara[i]);
    }
    sort(ara,ara+m);
    x=m-n;
    y=abs(ara[0]-ara[n-1]);
    for(i=0;i<=x;i++){
        a=abs(ara[i]-ara[i+n-1]);
        if(a<y){
            y=a;
        }
    }
    printf("%d\n",y);

return 0;
}
