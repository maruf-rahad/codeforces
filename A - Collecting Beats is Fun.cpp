#include<bits/stdc++.h>
using namespace std;
int ara[10];
void zero()
{
    for(int i = 0;i<10;i++)
    {
        ara[i] = 0;
    }
}
int main()
{
    int n,a,b,i,j,x,y;
    char ch;
    while(scanf("%d%c",&n,&ch)==2)
    {
        zero();
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                scanf("%c",&ch);
                a = ch-'0';
                ara[a]++;
            }
            scanf("%c",&ch);
        }

        int flag = 0.;


        for(i=1;i<10;i++)
        {
            if(n*2<ara[i])
            {
                flag = 1;
            }
        }
        if(flag==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }






    }










return 0;
}

