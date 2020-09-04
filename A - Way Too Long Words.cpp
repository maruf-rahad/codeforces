#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[200],ah,bh;
    int a,b,c,d,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&ch);
        int length=strlen(ch);
        if(length>10){
            ah=ch[0];
            bh=ch[length-1];
            printf("%c%d%c\n",ah,length-2,bh);

        }else{
        printf("%s\n",ch);
        }
    }




return 0;
}
