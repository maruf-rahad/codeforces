#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[200],str[200],ah,bh;
    int a,b,c,d,i,j;
    scanf("%s",&ch);
    scanf("%s",&str);
    int length=strlen(ch);
    int flag=0;
    for(i=0;i<length;i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            a=ch[i]+32;
        }else{
        a=ch[i];
        }
        if(str[i]>='A'&&str[i]<='Z'){
            b=str[i]+32;
        }else{
            b=str[i];

        }
        if(a>b){
            flag=1;
            break;
        }
        if(a<b){
            flag=2;
            break;
        }

    }
    if(flag==0){
        printf("0\n");
    }else if(flag==1){
        printf("1\n");
    }else if(flag==2){
    printf("-1\n");
    }



return 0;
}
