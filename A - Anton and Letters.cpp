#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,sum=0;
    char ch[2000];
    int ara[28];
    for(i=0;i<28;i++){
        ara[i]=0;
    }
    gets(ch);
    int length=strlen(ch);
    for(i=0;i<length;i++){
        if(ch[i]>=97&&ch[i]<=122){
            a=ch[i]-96;
            ara[a]++;
        }
    }
    for(i=0;i<28;i++){
            if(ara[i]>0){
                sum=sum+1;
            }
    }
    printf("%d\n",sum);




return 0;
}

