#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n;
    char ch[200];
    scanf("%s",&ch);
    int length=strlen(ch);
    for(i=0;i<length;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                a=ch[i]+32;
            }else{
            a=ch[i];
            }
            if(a==97||a==101||a==105||a==111||a==117||a==121){
            }
            else{
                printf(".%c",a);
            }
    }
    printf("\n");





return 0;
}
