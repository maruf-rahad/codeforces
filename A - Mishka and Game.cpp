#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,j,x,y;
    while(scanf("%d",&n)==1)
    {
        x=0,y=0;
        while(n--)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
            x++;
            if(a<b)
            y++;
        }
        if(x>y)
        {

            printf("Mishka\n");
        }
        else if(x<y){
        printf("Chris\n");
        }
        else{
        printf("Friendship is magic!^^\n");
        }
    }

    return 0;
}

