//solution dekhe marsi.
//bujhina baal ta;

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b,c,i,j,x,y,z;

    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
            x  = sqrt((a*b)/c);
            y = sqrt((b*c)/a);
            z = sqrt((a*c)/b);

            printf("%d\n",(x+y+z)*4);
    }











return 0;
}

