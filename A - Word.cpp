#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,i,j,sum;
    char ch[1000];
    scanf("%s",&ch);
    int length = strlen(ch);

    for(i=0;i<length;i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            a++;
        }
        else{

            b++;
        }
    }
    if(a>b){
        for(i=0;i<length;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                printf("%c",ch[i]);
            }
            else{
                printf("%c",ch[i]-32);
            }
        }
    }
    else{
        for(i=0;i<length;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                printf("%c",ch[i]+32);
            }
            else{
                printf("%c",ch[i]);
            }
        }
    }

    printf("\n");

return 0;
}
