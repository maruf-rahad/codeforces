#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10000];
    scanf("%s",&ch);
    if(ch[0]>=97&&ch[0]<=122){
        ch[0]=ch[0]-32;
    }
    printf("%s",ch);


    return 0;
}
