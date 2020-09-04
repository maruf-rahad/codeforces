#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,flag,i,j,sum;
    char str;
    scanf("%d%c",&n,&str);
    char ch[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%c",&ch[i][j]);
        }
        scanf("%c",&str);
    }
    flag=0;
    i=0;
    for(i=0;i<n;i++){
            sum=0;
        for(j=0;j<n;j++){
            if(ch[i][j+1]=='o'&&(j+1)<n){
                sum++;
            }
            if(ch[i][j-1]=='o'&&(j-1)>=0){
                sum++;
            }
            if(ch[i-1][j]=='o'&&(i-1)>=0){
                sum++;
            }
            if(ch[i+1][j]=='o'&&(i+1)<n){
                sum++;
            }
        if(sum%2!=0){
        flag=1;
        break;
    }
    }

    }

    if(flag==0){
        printf("YES\n");
    }else{
    printf("NO\n");
    }


return 0;
}
