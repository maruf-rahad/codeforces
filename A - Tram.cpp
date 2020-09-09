#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,sum;

    while(scanf("%d",&n)==1)
    {
        sum = 0;
        int total=0;
        while(n--){

            scanf("%d %d",&a,&b);
            sum=sum-a+b;
            if(sum>total){
                total=sum;
            }
        }
        printf("%d\n",total);
    }
return 0;
}

