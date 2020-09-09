#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m,a,b,c,i,j,x,y,sum,flag,t;

    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d %d %d",&a,&b,&c);


        x = (min(b,c/2));
        sum+=3*x;

        b-=x;

        sum+=min(a,b/2)*3;
        printf("%d\n",sum);


    }














return 0;
}
