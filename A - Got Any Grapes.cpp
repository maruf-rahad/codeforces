#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,z,flag,c;

    while(scanf("%d %d %d",&x,&y,&z)==3)
    {
        flag =- 0;
        scanf("%d %d %d",&a,&b,&c);
        a = a-x;


        if(a<0)flag = 1;

        int d = a+b-y;

        if(d<0)flag = 1;

        int e = d+c-z;
        if(e<0)flag = 1;

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
