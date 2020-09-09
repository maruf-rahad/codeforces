#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum,i,j;
    while(scanf("%d",&n)==1)
    {
        b=0;

        while(n--)
        {
            i=3;
            sum=0;
            while(i--)
                {
                    scanf("%d",&a);
                    if(a==1){
                        sum++;
                    }
                }
                if(sum>=2){
                    b++;
                }
        }
        printf("%d\n",b);

    }

return 0;
}

