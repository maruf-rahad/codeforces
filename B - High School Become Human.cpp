#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,j;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        int flag = 0;
        if((a==2&&b==4)||(a==4&&b==2))
        {
            flag = 1;
        }

       if(a==b||flag==1)
       {
           printf("=\n");
       }
       else if(a==1)
       {
           printf("<\n");
       }
       else if(b==1)
       {
           printf(">\n");
       }
       else if(a==2&&b==3)
       {
           printf("<\n");
       }
        else if(a==3&&b==2)
       {
           printf(">\n");
       }
       else if(a>b){
        printf("<\n");
       }
       else{
        printf(">\n");
       }
    }
return 0;
}


