#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,l,k,p,c,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int ara[n];
    ara[1]=((k*l)/nl)/n;
    ara[2]=(c*d)/n;
    ara[3]=((p/np)/n);
    sort(ara+1,ara+4);
    printf("%d\n",ara[1]);

return 0;
}

