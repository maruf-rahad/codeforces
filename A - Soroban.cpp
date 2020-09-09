#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;

    while(scanf("%d",&n)==1)
    {


        while(1)
        {
            a = n%10;

            if(a>=5)
            {
                printf("-O|");
            }
            else
            {
                printf("O-|");
            }
            if(a>=5)
            {
                b = a-5;
            }
            else{
                b = a;
            }

            if(b==0)
            {
                printf("-OOOO\n");
            }
            else if(b==1)
            {
                printf("O-OOO\n");
            }
            else if(b==2)
            {
                printf("OO-OO\n");
            }
            else if(b==3)
            {
                printf("OOO-O\n");
            }
            else if(b==4)
            {
                printf("OOOO-\n");
            }
            n = n/10;
            if(n==0)break;
        }

    }





    return 0;
}

