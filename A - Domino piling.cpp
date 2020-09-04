#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    scanf("%d %d",&n,&m);
    int sum=n/2*m;
    if(n%2==1){
        sum=sum+m/2;
    }
    printf("%d\n",sum);


return 0;
}
