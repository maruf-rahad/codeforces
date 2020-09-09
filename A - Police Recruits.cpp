#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,sum=0,total=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);

        if(sum==0&&a<0){

        total+=abs(a);

        }
        else if(a>=0)
        {
            sum+=a;
        }
        else{
        sum--;
        }
    }
    printf("%d\n",total);







return 0;
}

