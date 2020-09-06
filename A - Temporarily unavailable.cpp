#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int main()
{
    int n,m,a,b,i,j,flag,sum,t,r,c,x,y;
    char str;
    string s,s2;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&r);

        if(a>b)
        {
            swap(a,b);
        }

        x = c+r;
        y = c-r;
        sum = 0;
        if(x>=b&&y<=a)
        {
            sum = 0;
        }
        else if(x<a)
        {
            sum = b-a;
        }
        else if(y>b)
        {
            sum = b-a;
        }
        else if(y<a&&x<b)
        {
            sum  = b-x;
        }
        else if(x>b&&y<b)
        {
            sum = y-a;
        }
        else if(x<=b&&y>=a)
        {
            sum = (b-x)+(y-a);
        }
        else{
            sum = b-a;
        }
        if(sum<=0)
        {
            printf("%d\n",0);
        }
        else{
             printf("%d\n",sum);
        }

    }


return 0;
}

