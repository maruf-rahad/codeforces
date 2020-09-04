#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;
    scanf("%d %d",&n,&a);;
    for(i=1;i<=a;i++){
        int b=n%10;
        if(b==0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    printf("%d\n",n);




    return 0;
}
