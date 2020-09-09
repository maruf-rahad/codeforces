#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,i;

    int ara[4];
    while(scanf("%d %d %d",&ara[1],&ara[2],&ara[3])==3)
          {
              sort(ara+1,ara+4);

                x = ara[1]+ara[2];

                if(x>ara[3])
                {
                    printf("%d\n",0);
                }
                else{
                    y = ara[3]-x+1;
                    printf("%d\n",y);
                }

          }







return 0;
}


