#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int a,b,c,d,i,j;
    scanf("%s",&ch);
    int length=strlen(ch);
    a=0;
    for(i=0;i<length;){

        if(ch[i]=='W'&&ch[i+1]=='U'&&ch[i+2]=='B'&&i+2<length){
            i=i+2;
            if(a!=0){
            printf(" ");
        }
        }
        else{
                a=1;

            printf("%c",ch[i]);

        }
    i++;
    }
    printf("\n");



return 0;
}
