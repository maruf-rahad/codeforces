#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t,z,sum;
 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&x,&a,&b);
 
        if(a>b)swap(a,b);
 
        n = n-1;
 
        b = b+x;
        if(b-a>=n)
        {
            printf("%d\n",n);
        }
        else{
            printf("%d\n",b-a);
        }
    }
return 0;
}