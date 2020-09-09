#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y,a,b,sum,flag;


    while(scanf("%d",&a)==1)
    {
        flag = 0;

        while(flag!=1)
        {

            n = a;
            sum = 0;
            while(n!=0)
            {
                sum = sum +n%10;
                n = n/10;
            }
            if(sum%4==0)
            {
                flag = 1;
                break;
            }
            a++;
        }
        printf("%d\n",a);
    }






    return 0;
}

