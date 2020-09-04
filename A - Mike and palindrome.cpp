#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int a,b,i,j;
    while(scanf("%s",&ch)==1){

        int l = strlen(ch);
          a=0;
        for(i=0;i<l/2;i++){
            if(ch[i]!=ch[l-i-1]){
            a++;
            }
        }

        if(a==1||(l%2==1&&a==0)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

return 0;
}
