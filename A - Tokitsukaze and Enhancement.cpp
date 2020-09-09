#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        if(n%4==1)
        {
            printf("0 A\n");
        }
        else if(n%4==2)
        {
            printf("1 B\n");
        }
        else if(n%4==3){
            printf("2 A\n");
        }
        else{
            printf("1 A\n");
        }

    }

return 0;
}

