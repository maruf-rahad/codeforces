#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,flag;
    while(scanf("%d %d",&a,&b)==2)
    {
        sum = 0;
        flag = 0;

        while(!flag)
        {
            if(a<=2&&b<=2)
            {
                break;
            }
            if(a>2)
            {
                a-=2;
                b++;
            }
            else if(b>2)
            {
                a++;
                b-=2;
            }
            sum++;
        }
        if(a==2||b==2)
        {
            sum++;
        }
        printf("%d\n",sum);
    }








}
