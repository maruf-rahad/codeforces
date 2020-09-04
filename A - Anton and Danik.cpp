#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a=0,d=0,i;
    char ch,str;
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++){
        scanf("%c",&ch);
        if(ch=='A'){
            a=a+1;
        }
        else if(ch=='D'){
            d=d+1;
        }
    }
    if(a>d){
        printf("Anton\n");
    }
    else if(a<d){
        printf("Danik\n");
    }
    else{
        printf("Friendship\n");
    }









return 0;
}
