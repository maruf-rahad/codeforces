#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sum,s;
    while(scanf("%d %d",&a,&b)==2)
    {
        sum=240-b;
        s=0;
        for(i=1;i<=a;i++){
        b = i*5;
        sum=sum-b;
        if(sum>=0){
        s++;
        }
        else{
        break;
        }

        }

        printf("%d\n",s);

}


return 0;
}

