#include<bits/stdc++.h>
using namespace std;
int bun;

int beefcollect(int beef)
{
    int tb;
    if(beef*2<bun)
    {
        tb = beef;
        bun  = bun-2*tb;
    }
    else
    {
        tb = bun/2;
        bun  = bun-2*tb;
    }
    return tb;
}
int chickencollect(int c)
{
    int tc;
    if(c*2<bun)
    {
        tc = c;
        bun = bun - 2*tc;
    }
    else
    {
        tc = bun/2;
         bun = bun - 2*tc;
    }
   // printf("bun %d\n",bun);
    return tc;

}
int main()
{
    int beef,c,bp,cp,tb,tc,x,y,t;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {


            scanf("%d %d %d",&bun,&beef,&c);

            scanf("%d %d",&bp,&cp);

            if(bp>=cp)
            {
                x = beefcollect(beef);
                //  printf("bun %d\n",bun);
                y = chickencollect(c);
               // printf("%d %d\n",y,bun);
                // printf("bp %d %d\n",x,y);
                printf("%d\n",x*bp+y*cp);
            }
            else
            {
                x = chickencollect(c);
                 //  printf("bun %d\n",bun);
                y = beefcollect(beef);
               //   printf("%d %d\n",y,bun);
                printf("%d\n",x*cp+y*bp);
            }

        }
    }













    return 0;
}

