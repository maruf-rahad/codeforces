#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[150];
    int n,a,b,c,d,e,f,flag,i,j,length;
    scanf("%s",&ch);
    length=strlen(ch);
    a=0,b=0,c=0,d=0,e=0;
    for(i=0;i<length;i++){
        if(ch[i]=='h'){
            a=1;
        }
        else if(ch[i]=='e'&&a==1){
            b=1;
        }
        else if(ch[i]=='l'&&c==1){
            d=1;
        }
        else if(ch[i]=='l'&&b==1){
            c=1;
        }
        else if(ch[i]=='l'&&c==1){
            d=1;
        }else if(ch[i]=='o'&&d==1){
            e=1;
        }
    }

        if(a==1&&b==1&&c==1&&d==1&&e==1){
                printf("YES\n");
        }
        else{
        printf("NO\n");
        }
}
