#include<bits/stdc++.h>
using namespace std;
int ara[100];

int main()
{
    int i,j,a,b,x=0,n;
    scanf("%d",&n);
    for(i=1;i<=1000;i++){
        a=i;
        int flag=0;
        while(a!=0){
                if(a%10!=4&&a%10!=7){
                flag=1;
                break;
        }
        a=a/10;

        }
        if(flag==0){
            ara[x]=i;
            x++;
        }
    }
    int flag2=0;
    for(i=0;i<x;i++){
            if(n%ara[i]==0){
                printf("YES\n");
                flag2=1;
                break;
            }
    }
    if(flag2==0){
        printf("NO\n");
    }



    return 0;
}
