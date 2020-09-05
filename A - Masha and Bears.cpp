#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,flag,x;


    flag = 0;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        x = min(c,d)*2;
        if(x<c||x<d||d>=b||d>=a)
        {
            printf("-1\n");
        }
        else printf("%d %d %d\n",a*2,b*2,x);
    }








    return 0;
}
