#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a,b,i,j,x,y,t;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);

        if(m>n)
        {
            swap(m,n);
        }

        if((n+m)%3==0&&2*m>=n)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }









return 0;
}
