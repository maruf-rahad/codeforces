#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,c,d;

    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        x = a*2+c;
        y = d*2+c;


        if(a==0&&c==0&&d==0)
        {
            printf("1\n");
        }
        else if(a==0&&d==0&&c>0)
        {
            printf("0\n");
        }
        else if(x==y)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }









return 0;
}

