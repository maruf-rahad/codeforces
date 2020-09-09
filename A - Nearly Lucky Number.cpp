#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[50];
    int a,b=0,i,j;
    scanf("%s",&ch);
        a = strlen(ch);
    int flag=0;
    for(i=0;i<a;i++){
        if(ch[i]=='4'||ch[i]=='7'){
            b++;
        }
    }
       if(b==4||b==7){
        printf("YES\n");
    }
        else{
        printf("NO\n");
    }

return 0;
}

