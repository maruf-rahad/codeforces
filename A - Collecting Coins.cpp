#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4];

    int t,a,b,i,j;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {


            for(i=0; i<4; i++)
            {
                scanf("%d",&ara[i]);
            }
            sort(ara,ara+3);


            a = (ara[2]-ara[1])+(ara[2]-ara[0]);

            if(ara[3]>=a&&(ara[3]-a)%3==0)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }





    }
















    return 0;
}
