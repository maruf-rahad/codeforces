#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[2000],str;
    int n,a,b,i,j,flag=0,flag2=0,flag3=0;
    scanf("%d%c",&n,&str);
    for(i=0;i<n;i++){
        scanf("%c",&ch[i]);
    }
    for(i=0;i<n;i++){
        if(n==1&&ch[0]=='0'){
        flag3=1;
                }
       else if(ch[i]=='1'&&flag==0){
            flag=1;
            flag2=0;
        }
        else if(ch[i]=='1'&&flag==1){
            flag3=1;
            break;
        }
        else if(ch[i]=='0'&&flag2==0){
            flag2=1;
            flag=0;
        }else if(ch[i]=='0'&&flag2==1){
        flag2=2;
        }
        else if(ch[i]=='0'&&flag2==2){
                flag3=1;
            break;
        }
    }
    if(ch[0]=='0'&&ch[1]=='0'){
        flag3=1;
    }
    if(ch[n-1]=='0'&&ch[n-2]=='0'){
        flag3=1;
    }
    if(flag3==1){
        printf("No\n");
    }else{
    printf("Yes\n");
    }

return 0;
}
