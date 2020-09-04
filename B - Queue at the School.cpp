#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n,t;
    char ch[100],ah;
    scanf("%d %d",&n,&t);
    scanf("%s",&ch);
    int l = strlen(ch);
    int flag=0,flag2=0;
    for(j=1;j<=t;j++){
    for(i=0;i<l-1;i++){
            flag=0;
            flag2=0;
            if(ch[i]=='B'){
                ah = ch[i];
                i++;
                flag=1;

                if(ch[i]=='G'){
                    ch[i-1]=ch[i];
                    ch[i]=ah;
                    flag2=1;
                }
                if(flag==1&&flag2==0){
                    i--;
                }
            }
    }

    }
    for(i=0;i<l;i++){
        printf("%c",ch[i]);
    }
    printf("\n");

return 0;
}

