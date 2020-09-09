#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n;
    while(scanf("%d",&n)==1){
        if(n%5==0){
            printf("%d\n",n/5);
        }
        else{
            printf("%d\n",n/5+1);
        }
    }

return 0;
}

