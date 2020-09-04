#include<bits/stdc++.h>
using namespace std;
int ara[800];
int main()
{
   char ch[200],str;
   int a,b,i,j,sum,n,length,d;
   scanf("%d%c",&n,&str);
    scanf("%s",&ch);
    length=strlen(ch);
    int flag1=0,flag2=0;
   for(i=0;i<length;i++){
        a=ch[i]-'A'+1;
        i++;
        flag1=1;
        if(i<length){
            b=ch[i]-'A'+1;
            flag2=1;
        }
        if(flag1==1&&flag2==1){
           d=((a-1)*26)+b;
           ara[d]++;
        }
        i--;
         flag1=0;
         flag2=0;
   }
   int ma=0;
   int k=0;
   for(i=0;i<790;i++){
    if(ara[i]>ma){
        ma=ara[i];
        k=i;
    }
   }
   int flag=0;
   for(i=0;i<=26;i++){

    for(j=0;j<=26;j++){

        int y=i*26+j;

        if(y==k){
                flag=1;
            break;
        }
    }
    if(flag==1)break;

   }
   printf("%c%c\n",'A'+i,'A'+j-1);

    return 0;
}
