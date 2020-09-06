#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,c;
    int ara[3];
 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&ara[0],&ara[1],&ara[2]);
 
        sort(ara,ara+3);
 
        if(ara[2]>=(ara[1]+ara[0]))
        {
            printf("%d\n",ara[0]+ara[1]);
        }
        else{
            printf("%d\n",(ara[0]+ara[1]+ara[2])/2);
        }
    }
return 0;
}