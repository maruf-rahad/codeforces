#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a,b,sum=0,flag,x;
    char str;
    scanf("%d %d%c",&n,&m,&str);
    char ch[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%c",&ch[i][j]);
        }
        scanf("%c",&str);
    }
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<m;j++){

            if(ch[i][j]=='S'){
                flag=1;
            }
        }
        if(flag==0){
            sum++;
        }
    }
    x=sum*m;
    int sub=0;
    for(i=0;i<m;i++){
            flag=0;
        for(j=0;j<n;j++){
            if(ch[j][i]=='S'){
                flag=1;
            }
        }
        if(flag==0){
            sub++;
        }
    }
    int total=x+(n-sum)*sub;
    printf("%d\n",total);

return 0;
}
