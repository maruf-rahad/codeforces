#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,x,y,z,sum,n,m;
    char str;
    k=1;

        scanf("%d %d%c",&a,&b,&str);
        char ch[a][b];
        char ch2[a][b];
        int ara[a][b];

        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                scanf("%c",&ch[i][j]);
                ara[i][j]=0;
            }
            scanf("%c",&str);
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(ch[i][j]=='*')continue;

                sum=0;
                c=i;
                d=j;
                x=i;
                y=j+1;
                if(y<b){

                        if(ch[x][y]=='*'){
                    sum=sum+1;
                }
                }
                x=i;
                y=j-1;
                if(y>=0){
                    if(ch[x][y]=='*'){
                        sum=sum+1;
                    }
                }
                x=i-1;
                y=j;
                if(x>=0){
                    if(ch[x][y]=='*'){
                        sum=sum+1;
                    }
                }
                x=i+1;
                y=j;
                if(x<a){
                    if(ch[x][y]=='*'){
                        sum=sum+1;
                    }
                }
                x=i+1;
                y=j+1;
                if(x<a&&y<b){
                    if(ch[x][y]=='*'){

                        sum=sum+1;
                    }
                }
                x=i-1;
                y=j+1;
                if(x>=0&&y<b){
                    if(ch[x][y]=='*'){
                        sum=sum+1;
                    }
                }
                x=i-1;
                y=j-1;
                if(x>=0&&y>=0){
                    if(ch[x][y]=='*'){
                        sum=sum+1;
                    }
                }
                x=i+1;
                y=j-1;
                if(x<a&&y>=0){
                    if(ch[x][y]=='*'){
                        sum=sum+1;
                    }
                }

                ara[c][d]=sum;
            }
        }
        int flag=0,p;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(ch[i][j]=='*')continue;


            else{
                if(ch[i][j]=='.'){
                    p=0;
                }
                else{
                p=ch[i][j]-'0';
                }

                if(p!=ara[i][j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            break;
        }

        }

        if(flag==0){
            printf("YES\n");
        }else{
        printf("NO\n");
        }



return 0;
}
