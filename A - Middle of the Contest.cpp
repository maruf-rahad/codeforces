#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,a,b,i,j,x,y,sum;

    char ch,str;

    while(scanf("%d%c%d",&h1,&str,&m1)==3)
    {
        scanf("%d%c%d",&h2,&str,&m2);

      //  printf("%d %d %d %d\n",h1,m1,h2,m2);

        sum = ((h1+h2)*60+m1+m2)/2;

        a = sum%60;
        b = sum/60;
        x = b;
        y = a;

        i = 0;
        while(x!=0)
        {
            x = x/10;
            i++;
        }
        j = 0;
        while(y!=0)
        {
            y = y/10;
            j++;
        }

      if(i<2)
      {
          printf("0");
      }
      printf("%d:",b);

      if(j<2)
      {
          printf("0");
      }
      printf("%d\n",a);
    }









return 0;
}

