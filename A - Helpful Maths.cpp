#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[250];
    int a,b,c,d,i,j;
    int ara[200];
    scanf("%s",&ch);
    int length=strlen(ch);
    a=0;
    for(i=0;i<length;i++){
        if(ch[i]>='0'&&ch[i]<='9'){
        b=ch[i]-'0';
        ara[a]=b;
        a++;
        }
    }
    sort(ara,ara+a);
    printf("%d",ara[0]);
    for(i=1;i<a;i++){
        printf("+%d",ara[i]);
    }
    printf("\n");



return 0;
}
