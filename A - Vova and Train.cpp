#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,m,i,j,x,y,c,d,z;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        x = a/b;

        int p = (c-1)/b;
        int q = d/b;
        int r = q-p;
        z = x-r;



        printf("%d\n",z);
    }










return 0;
}

