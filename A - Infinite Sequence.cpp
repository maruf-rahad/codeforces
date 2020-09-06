#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(c==0)
        {
 
            if(b==a)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if((b-a)%c==0&&((b-a)/c)>=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}