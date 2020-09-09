#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c,d,x,y;

    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        x = max((3*a/10),a-((a/250)*c));

         y = max((3*b/10),b-((b/250)*d));

         if(x<y)
         {
             printf("Vasya\n");
         }
         else if(x>y)
         {
             printf("Misha\n");
         }
         else{
         printf("Tie\n");
         }



    }



}

