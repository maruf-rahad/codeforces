#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,l1,l2,r1,r2;

    while(scanf("%d",&n)==1)
    {
        while(n--)
        {



            scanf("%d %d %d %d",&l1,&r1,&l2,&r2);

            if(l1!=l2)
            {
                printf("%d %d\n",l1,l2);
            }
            else if(l1!=r2)
            {
                 printf("%d %d\n",l1,r2);
            }
             else if(l2!=r1)
            {
                 printf("%d %d\n",l2,r1);
            }
             else if(l2!=r2)
            {
                 printf("%d %d\n",l2,r2);
            }
            else{
                printf("%d %d\n",l1,r2-1);
            }
        }



    }







    return 0;
}

