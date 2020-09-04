#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    char ch2[1000];
    int a,b,i,j;
    while(scanf("%s",&ch)==1){
    scanf(" %s",&ch2);
    strrev(ch2);
    if(strcmp(ch,ch2)==0){
        printf("YES\n");
    }else{
    printf("NO\n");
    }

    }

return 0;
}
