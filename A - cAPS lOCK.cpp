#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,flag=0,flag2=0;
    char ch[200];
    scanf("%s",&ch);
    int length=strlen(ch);
    if(ch[0]>=97&&ch[0]<=122){
        flag=1;
    }
        for(i=1;i<length;i++){
            if(ch[i]>=65&&ch[i]<=90){
            }
            else{
                flag2=1;
                break;
            }
        }
        if((flag==1&&flag2==0)||(flag==0&&flag2==0)){
            for(i=0;i<length;i++){
                if(ch[i]>=65&&ch[i]<=90){
                    printf("%c",ch[i]+32);
                }
                else{
                    printf("%c",ch[i]-32);
                }
            }
        }
        else{
            printf("%s\n",ch);
        }

    return 0;
}
